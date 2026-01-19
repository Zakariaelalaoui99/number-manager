#ifndef ADDNUMBERDIALOG_H
#define ADDNUMBERDIALOG_H

#include <QDialog>

namespace Ui {
class AddNumberDialog;
}

class AddNumberDialog : public QDialog
{
    Q_OBJECT

public:
    explicit AddNumberDialog(QWidget *parent = nullptr);
    ~AddNumberDialog();

    double getNumber() const;

    // Setter to show the existing number when editing
    void setNumber(double n);


private:
    Ui::AddNumberDialog *ui;

};

#endif // ADDNUMBERDIALOG_H
