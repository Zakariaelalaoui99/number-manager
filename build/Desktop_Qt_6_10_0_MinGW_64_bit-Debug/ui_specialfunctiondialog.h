/********************************************************************************
** Form generated from reading UI file 'specialfunctiondialog.ui'
**
** Created by: Qt User Interface Compiler version 6.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SPECIALFUNCTIONDIALOG_H
#define UI_SPECIALFUNCTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_SpecialFunctionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *naturNumlineEdit;
    QRadioButton *NatFolgradioButton;
    QRadioButton *fakultatradioButton;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *SpecialFunctionDialog)
    {
        if (SpecialFunctionDialog->objectName().isEmpty())
            SpecialFunctionDialog->setObjectName("SpecialFunctionDialog");
        SpecialFunctionDialog->resize(380, 174);
        verticalLayout_2 = new QVBoxLayout(SpecialFunctionDialog);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(SpecialFunctionDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        naturNumlineEdit = new QLineEdit(SpecialFunctionDialog);
        naturNumlineEdit->setObjectName("naturNumlineEdit");

        horizontalLayout->addWidget(naturNumlineEdit);


        verticalLayout->addLayout(horizontalLayout);

        NatFolgradioButton = new QRadioButton(SpecialFunctionDialog);
        NatFolgradioButton->setObjectName("NatFolgradioButton");

        verticalLayout->addWidget(NatFolgradioButton);

        fakultatradioButton = new QRadioButton(SpecialFunctionDialog);
        fakultatradioButton->setObjectName("fakultatradioButton");

        verticalLayout->addWidget(fakultatradioButton);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 39, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(SpecialFunctionDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(SpecialFunctionDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, SpecialFunctionDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, SpecialFunctionDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(SpecialFunctionDialog);
    } // setupUi

    void retranslateUi(QDialog *SpecialFunctionDialog)
    {
        SpecialFunctionDialog->setWindowTitle(QCoreApplication::translate("SpecialFunctionDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("SpecialFunctionDialog", "Number n= :", nullptr));
        NatFolgradioButton->setText(QCoreApplication::translate("SpecialFunctionDialog", "Nat\303\274rliche Folge", nullptr));
        fakultatradioButton->setText(QCoreApplication::translate("SpecialFunctionDialog", "Fakult\303\244t", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SpecialFunctionDialog: public Ui_SpecialFunctionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SPECIALFUNCTIONDIALOG_H
