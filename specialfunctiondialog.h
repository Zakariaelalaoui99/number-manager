#ifndef SPECIALFUNCTIONDIALOG_H
#define SPECIALFUNCTIONDIALOG_H

#include <QDialog>

namespace Ui { class SpecialFunctionDialog; }

class SpecialFunctionDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SpecialFunctionDialog(QWidget *parent = nullptr);
    ~SpecialFunctionDialog();

    // Getters for MainWindow
    int getN() const;
    bool isFactorial() const;

private slots:
    void validateInput(); // To enable/disable OK button dynamically

private:
    Ui::SpecialFunctionDialog *ui;
};

#endif
