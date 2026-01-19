#include "addnumberdialog.h"
#include "specialfunctiondialog.h"
#include "ui_addnumberdialog.h"
#include "specialfunctiondialog.h"

AddNumberDialog::AddNumberDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::AddNumberDialog)
{
    ui->setupUi(this);
}

AddNumberDialog::~AddNumberDialog()
{
    delete ui;
}

double AddNumberDialog::getNumber() const
{
       return ui->lineEdit->text().toDouble();
}


void AddNumberDialog::setNumber(double n) {
    ui->lineEdit->setText(QString::number(n));
}

SpecialFunctionDialog::~SpecialFunctionDialog()
{
    delete ui;
}
