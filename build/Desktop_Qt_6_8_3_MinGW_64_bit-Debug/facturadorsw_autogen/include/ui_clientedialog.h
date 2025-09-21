/********************************************************************************
** Form generated from reading UI file 'clientedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTEDIALOG_H
#define UI_CLIENTEDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ClienteDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *documentoCbo;
    QLabel *label_2;
    QLineEdit *documentoTxt;
    QPushButton *consultaPb;
    QFormLayout *formLayout;
    QLabel *label_3;
    QLineEdit *nombreTxt;
    QLabel *label_4;
    QLineEdit *direccionTxt;
    QLabel *label_5;
    QComboBox *estadoCbo;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ClienteDialog)
    {
        if (ClienteDialog->objectName().isEmpty())
            ClienteDialog->setObjectName("ClienteDialog");
        ClienteDialog->resize(601, 166);
        verticalLayout = new QVBoxLayout(ClienteDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ClienteDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        documentoCbo = new QComboBox(ClienteDialog);
        documentoCbo->setObjectName("documentoCbo");

        horizontalLayout->addWidget(documentoCbo);

        label_2 = new QLabel(ClienteDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        documentoTxt = new QLineEdit(ClienteDialog);
        documentoTxt->setObjectName("documentoTxt");

        horizontalLayout->addWidget(documentoTxt);

        consultaPb = new QPushButton(ClienteDialog);
        consultaPb->setObjectName("consultaPb");

        horizontalLayout->addWidget(consultaPb);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_3 = new QLabel(ClienteDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_3);

        nombreTxt = new QLineEdit(ClienteDialog);
        nombreTxt->setObjectName("nombreTxt");

        formLayout->setWidget(0, QFormLayout::FieldRole, nombreTxt);

        label_4 = new QLabel(ClienteDialog);
        label_4->setObjectName("label_4");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_4);

        direccionTxt = new QLineEdit(ClienteDialog);
        direccionTxt->setObjectName("direccionTxt");

        formLayout->setWidget(1, QFormLayout::FieldRole, direccionTxt);

        label_5 = new QLabel(ClienteDialog);
        label_5->setObjectName("label_5");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_5);

        estadoCbo = new QComboBox(ClienteDialog);
        estadoCbo->setObjectName("estadoCbo");

        formLayout->setWidget(2, QFormLayout::FieldRole, estadoCbo);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(ClienteDialog);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ClienteDialog);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, ClienteDialog, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, ClienteDialog, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(ClienteDialog);
    } // setupUi

    void retranslateUi(QDialog *ClienteDialog)
    {
        ClienteDialog->setWindowTitle(QCoreApplication::translate("ClienteDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ClienteDialog", "Tipo doc.", nullptr));
        label_2->setText(QCoreApplication::translate("ClienteDialog", "Nro. Doc.", nullptr));
        consultaPb->setText(QCoreApplication::translate("ClienteDialog", "Consulta SUNAT", nullptr));
        label_3->setText(QCoreApplication::translate("ClienteDialog", "Nombre / Raz\303\263n social:", nullptr));
        label_4->setText(QCoreApplication::translate("ClienteDialog", "Direcci\303\263n:", nullptr));
        label_5->setText(QCoreApplication::translate("ClienteDialog", "Estado:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ClienteDialog: public Ui_ClienteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEDIALOG_H
