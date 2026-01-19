/********************************************************************************
** Form generated from reading UI file 'addnumberdialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDNUMBERDIALOG_H
#define UI_ADDNUMBERDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AddNumberDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AddNumberDialog)
    {
        if (AddNumberDialog->objectName().isEmpty())
            AddNumberDialog->setObjectName("AddNumberDialog");
        AddNumberDialog->resize(399, 164);
        verticalLayout = new QVBoxLayout(AddNumberDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(AddNumberDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(AddNumberDialog);
        lineEdit->setObjectName("lineEdit");

        horizontalLayout->addWidget(lineEdit);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AddNumberDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(AddNumberDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AddNumberDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AddNumberDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AddNumberDialog);
    } // setupUi

    void retranslateUi(QDialog *AddNumberDialog)
    {
        AddNumberDialog->setWindowTitle(QCoreApplication::translate("AddNumberDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AddNumberDialog", "Number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AddNumberDialog: public Ui_AddNumberDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDNUMBERDIALOG_H
