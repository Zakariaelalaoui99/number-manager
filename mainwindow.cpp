#include "mainwindow.h"
#include "specialfunctiondialog.h"
#include "ui_mainwindow.h"
#include "addnumberdialog.h"
#include <QMessageBox>
#include <QInputDialog>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    m_numberslist = NumbersList::instance();

    // DYNAMIC LOGIC

    // When the data changes, refresh the list and result
    connect(m_numberslist, &NumbersList::listChanged, this, &MainWindow::pdateUI);

    //  Enable/Disable Delete
    connect(ui->listWidget, &QListWidget::itemSelectionChanged, this, &MainWindow::pdateUI);

    // When the user changes the Math Function in the ComboBox
    connect(ui->comboBox, &QComboBox::currentTextChanged, this, &MainWindow::pdateUI);


    pdateUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionadd_triggered()
{
    AddNumberDialog dialog(this);
    if(dialog.exec() == QDialog::Accepted){

        double val = dialog.getNumber();
        m_numberslist->addNumber(val);
    }
}

void MainWindow::on_actionedit_triggered()
{
    // Get the current selection
    int currentRow = ui->listWidget->currentRow();
    if (currentRow < 0) return;

    //  Create addnumdialog
    AddNumberDialog dialog(this);
    dialog.setWindowTitle("Zahl bearbeiten");

    //  Pass the current value into the dialog
    double currentValue = m_numberslist->numbers().at(currentRow);
    dialog.setNumber(currentValue);

    //If user clicks OK, update the list
    if (dialog.exec() == QDialog::Accepted) {
        double newValue = dialog.getNumber();
        m_numberslist->editAt(currentRow, newValue);
    }
}

void MainWindow::on_actiondelet_triggered()
{
    int currentRow = ui->listWidget->currentRow();
    if (currentRow < 0) return;

    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Löschen bestätigen",
                                  "Möchten Sie die ausgewählte Zahl wirklich löschen?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        m_numberslist->removeAt(currentRow);
    }
}

void MainWindow::on_clearButton_clicked()
{
    QMessageBox::StandardButton reply;
    reply = QMessageBox::question(this, "Löschen bestätigen",
                                  "Möchten Sie die Liste wirklich löschen?",
                                  QMessageBox::Yes | QMessageBox::No);

    if (reply == QMessageBox::Yes) {
        m_numberslist->clear();
    }
}

// UPDAT THE MAINWINDOW
void MainWindow::pdateUI()
{
    // SAVE the selection before clearing the list
    int savedRow = ui->listWidget->currentRow();

    // Update the visual ListWidget

    ui->listWidget->blockSignals(true);
    ui->listWidget->clear();
    const QList<double>& data = m_numberslist->numbers();
    for (double n : data) {
        ui->listWidget->addItem(QString::number(n));
    }

    // RESTORE the selection if it's still valid
    if (savedRow >= 0 && savedRow < ui->listWidget->count()) {
        ui->listWidget->setCurrentRow(savedRow);
    }
    ui->listWidget->blockSignals(false);

    //CALCULATION LOGIC
    if (data.isEmpty()) {
        ui->label->setText("-");
    } else {
        double result = 0;
        QString func = ui->comboBox->currentText();

        if (func == "Sum") {
            for(double d : data) result += d;
        } else if (func == "Multiply") {
            result = 1;
            for(double d : data) result *= d;
        } else if (func == "Average") {
            double sum = 0;
            for(double d : data) sum += d;
            result = sum / data.count();
        }
        ui->label->setText(QString::number(result));
    }

    //  BUTTON STATES
    // Check selection again AFTER we restored the row
    bool hasSelection = (ui->listWidget->currentRow() != -1);
    bool hasItems = (ui->listWidget->count() > 0);

    ui->actiondelet->setEnabled(hasSelection);
    ui->actionedit->setEnabled(hasSelection);
    ui->editButton->setEnabled(hasSelection);
    ui->deleteButton->setEnabled(hasSelection);

    // Clear button only visible if list not empty
    ui->clearButton->setVisible(hasItems);
}




void MainWindow::on_actionSpecial_Function_triggered()
{
    SpecialFunctionDialog dialog(this);

    if (dialog.exec() == QDialog::Accepted) {
        int n = dialog.getN();
        bool useFactorial = dialog.isFactorial();

        // Use the Singleton to generate and update everything
        m_numberslist->generateSpecial(n, useFactorial);

    }
}









