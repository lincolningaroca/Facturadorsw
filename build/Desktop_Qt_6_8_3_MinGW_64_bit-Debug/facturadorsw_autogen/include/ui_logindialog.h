/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_LogInDialog
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QToolButton *setUpTb;
    QFormLayout *formLayout;
    QLabel *label_2;
    QLineEdit *usuarioTxt;
    QLabel *label_3;
    QLineEdit *passwordTxt;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *ingresarPb;

    void setupUi(QDialog *LogInDialog)
    {
        if (LogInDialog->objectName().isEmpty())
            LogInDialog->setObjectName("LogInDialog");
        LogInDialog->resize(400, 137);
        verticalLayout = new QVBoxLayout(LogInDialog);
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(LogInDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        setUpTb = new QToolButton(LogInDialog);
        setUpTb->setObjectName("setUpTb");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/iconos/configurar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        setUpTb->setIcon(icon);

        horizontalLayout->addWidget(setUpTb);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(LogInDialog);
        label_2->setObjectName("label_2");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        usuarioTxt = new QLineEdit(LogInDialog);
        usuarioTxt->setObjectName("usuarioTxt");

        formLayout->setWidget(0, QFormLayout::FieldRole, usuarioTxt);

        label_3 = new QLabel(LogInDialog);
        label_3->setObjectName("label_3");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_3);

        passwordTxt = new QLineEdit(LogInDialog);
        passwordTxt->setObjectName("passwordTxt");

        formLayout->setWidget(1, QFormLayout::FieldRole, passwordTxt);


        verticalLayout->addLayout(formLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        ingresarPb = new QPushButton(LogInDialog);
        ingresarPb->setObjectName("ingresarPb");

        horizontalLayout_2->addWidget(ingresarPb);


        verticalLayout->addLayout(horizontalLayout_2);


        retranslateUi(LogInDialog);

        QMetaObject::connectSlotsByName(LogInDialog);
    } // setupUi

    void retranslateUi(QDialog *LogInDialog)
    {
        LogInDialog->setWindowTitle(QCoreApplication::translate("LogInDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("LogInDialog", "Iniciar sesi\303\263n", nullptr));
        setUpTb->setText(QCoreApplication::translate("LogInDialog", "...", nullptr));
        label_2->setText(QCoreApplication::translate("LogInDialog", "&Usuario:", nullptr));
        label_3->setText(QCoreApplication::translate("LogInDialog", "&Password:", nullptr));
        ingresarPb->setText(QCoreApplication::translate("LogInDialog", "Ingresar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class LogInDialog: public Ui_LogInDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
