/********************************************************************************
** Form generated from reading UI file 'productodialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCTODIALOG_H
#define UI_PRODUCTODIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ProductoDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *label_2;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QComboBox *comboBox;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBox;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_6;
    QComboBox *comboBox_2;
    QLabel *label_7;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ProductoDialog)
    {
        if (ProductoDialog->objectName().isEmpty())
            ProductoDialog->setObjectName("ProductoDialog");
        ProductoDialog->resize(441, 248);
        verticalLayout = new QVBoxLayout(ProductoDialog);
        verticalLayout->setObjectName("verticalLayout");
        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label = new QLabel(ProductoDialog);
        label->setObjectName("label");

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        lineEdit = new QLineEdit(ProductoDialog);
        lineEdit->setObjectName("lineEdit");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit);

        label_2 = new QLabel(ProductoDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        lineEdit_2 = new QLineEdit(ProductoDialog);
        lineEdit_2->setObjectName("lineEdit_2");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_2);

        label_3 = new QLabel(ProductoDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        comboBox = new QComboBox(ProductoDialog);
        comboBox->setObjectName("comboBox");

        formLayout->setWidget(2, QFormLayout::FieldRole, comboBox);

        label_4 = new QLabel(ProductoDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        doubleSpinBox = new QDoubleSpinBox(ProductoDialog);
        doubleSpinBox->setObjectName("doubleSpinBox");

        formLayout->setWidget(3, QFormLayout::FieldRole, doubleSpinBox);

        label_5 = new QLabel(ProductoDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_5);

        doubleSpinBox_2 = new QDoubleSpinBox(ProductoDialog);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");

        formLayout->setWidget(4, QFormLayout::FieldRole, doubleSpinBox_2);

        label_6 = new QLabel(ProductoDialog);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        comboBox_2 = new QComboBox(ProductoDialog);
        comboBox_2->setObjectName("comboBox_2");

        formLayout->setWidget(5, QFormLayout::FieldRole, comboBox_2);


        verticalLayout->addLayout(formLayout);

        label_7 = new QLabel(ProductoDialog);
        label_7->setObjectName("label_7");

        verticalLayout->addWidget(label_7);

        buttonBox = new QDialogButtonBox(ProductoDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ProductoDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ProductoDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ProductoDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ProductoDialog);
    } // setupUi

    void retranslateUi(QDialog *ProductoDialog)
    {
        ProductoDialog->setWindowTitle(QCoreApplication::translate("ProductoDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ProductoDialog", "C\303\263digo: (*)", nullptr));
        label_2->setText(QCoreApplication::translate("ProductoDialog", "Descripci\303\263n: (*)", nullptr));
        label_3->setText(QCoreApplication::translate("ProductoDialog", "Tipo unidad:", nullptr));
        label_4->setText(QCoreApplication::translate("ProductoDialog", "Precio 1:", nullptr));
        label_5->setText(QCoreApplication::translate("ProductoDialog", "Precio 2:", nullptr));
        label_6->setText(QCoreApplication::translate("ProductoDialog", "Estado:", nullptr));
        label_7->setText(QCoreApplication::translate("ProductoDialog", "* Precios sin IGV, m\303\241x. 10 decimales.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProductoDialog: public Ui_ProductoDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCTODIALOG_H
