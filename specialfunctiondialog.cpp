#include "specialfunctiondialog.h"
#include "ui_specialfunctiondialog.h"
#include <QPushButton>
#include <QSpinBox>

SpecialFunctionDialog::SpecialFunctionDialog(QWidget *parent) :
    QDialog(parent), ui(new Ui::SpecialFunctionDialog)
{
    ui->setupUi(this);

    // Connect signals so the OK button updates every time the user types or clicks
    connect(ui->naturNumlineEdit, &QLineEdit::textChanged, this, &SpecialFunctionDialog::validateInput);
    connect(ui->NatFolgradioButton, &QRadioButton::toggled, this, &SpecialFunctionDialog::validateInput);
    connect(ui->fakultatradioButton, &QRadioButton::toggled, this, &SpecialFunctionDialog::validateInput);

    validateInput(); // Initial check
}

void SpecialFunctionDialog::validateInput()
{
    // Convert text to integer. toInt() returns 0 if text is not a number.
    int n = ui->naturNumlineEdit->text().toInt();

    bool nValid = (n > 0);
    bool typeSelected = ui->NatFolgradioButton->isChecked() || ui->fakultatradioButton->isChecked();

    // Enable OK only if n > 0 AND a function is selected
    ui->buttonBox->button(QDialogButtonBox::Ok)->setEnabled(nValid && typeSelected);
}

int SpecialFunctionDialog::getN() const
{
    return ui->naturNumlineEdit->text().toInt();
}

bool SpecialFunctionDialog::isFactorial() const
{
    return ui->fakultatradioButton->isChecked();
}
