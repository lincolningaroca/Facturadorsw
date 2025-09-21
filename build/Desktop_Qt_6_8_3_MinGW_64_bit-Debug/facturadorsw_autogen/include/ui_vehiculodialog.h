/********************************************************************************
** Form generated from reading UI file 'vehiculodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VEHICULODIALOG_H
#define UI_VEHICULODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_VehiculoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *VehiculoDialog)
    {
        if (VehiculoDialog->objectName().isEmpty())
            VehiculoDialog->setObjectName("VehiculoDialog");
        VehiculoDialog->resize(400, 164);
        verticalLayout = new QVBoxLayout(VehiculoDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(VehiculoDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(VehiculoDialog);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(VehiculoDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(VehiculoDialog);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(VehiculoDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        lineEdit_3 = new QLineEdit(VehiculoDialog);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_3);

        label_4 = new QLabel(VehiculoDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        comboBox = new QComboBox(VehiculoDialog);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, comboBox);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(VehiculoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(VehiculoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, VehiculoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, VehiculoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(VehiculoDialog);
    } // setupUi

    void retranslateUi(QDialog *VehiculoDialog)
    {
        VehiculoDialog->setWindowTitle(QCoreApplication::translate("VehiculoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("VehiculoDialog", "Marca:", nullptr));
        label_2->setText(QCoreApplication::translate("VehiculoDialog", "Modelo:", nullptr));
        label_3->setText(QCoreApplication::translate("VehiculoDialog", "Placa:", nullptr));
        label_4->setText(QCoreApplication::translate("VehiculoDialog", "Estado:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class VehiculoDialog: public Ui_VehiculoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VEHICULODIALOG_H
