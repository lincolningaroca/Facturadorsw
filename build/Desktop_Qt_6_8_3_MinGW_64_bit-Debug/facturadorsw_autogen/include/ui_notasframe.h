/********************************************************************************
** Form generated from reading UI file 'notasframe.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTASFRAME_H
#define UI_NOTASFRAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_NotasFrame
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QLabel *label_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *label_4;
    QDateEdit *dateEdit_2;
    QSpacerItem *horizontalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QLabel *label_5;
    QComboBox *comboBox_2;
    QLabel *label_6;
    QLineEdit *lineEdit_2;
    QSpacerItem *horizontalSpacer;
    QFormLayout *formLayout;
    QLabel *label_7;
    QLineEdit *lineEdit_3;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_9;
    QComboBox *comboBox_3;
    QLabel *label_10;
    QComboBox *comboBox_4;
    QLabel *label_11;
    QComboBox *comboBox_5;
    QLabel *label_12;
    QLineEdit *lineEdit_5;
    QLabel *label_13;
    QComboBox *comboBox_6;
    QSpacerItem *horizontalSpacer_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_14;
    QLineEdit *lineEdit_6;
    QLabel *label_15;

    void setupUi(QFrame *NotasFrame)
    {
        if (NotasFrame->objectName().isEmpty())
            NotasFrame->setObjectName("NotasFrame");
        NotasFrame->resize(988, 202);
        verticalLayout = new QVBoxLayout(NotasFrame);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(1, 1, 1, 1);
        groupBox = new QGroupBox(NotasFrame);
        groupBox->setObjectName("groupBox");
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout_2->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        label = new QLabel(groupBox);
        label->setObjectName("label");

        horizontalLayout_7->addWidget(label);

        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(120, 0));

        horizontalLayout_7->addWidget(lineEdit);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");
        pushButton->setMinimumSize(QSize(150, 0));

        horizontalLayout_7->addWidget(pushButton);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName("label_2");

        horizontalLayout_7->addWidget(label_2);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(130, 0));

        horizontalLayout_7->addWidget(comboBox);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_7->addWidget(label_3);

        dateEdit = new QDateEdit(groupBox);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout_7->addWidget(dateEdit);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        horizontalLayout_7->addWidget(label_4);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_7->addWidget(dateEdit_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label_5 = new QLabel(groupBox);
        label_5->setObjectName("label_5");

        horizontalLayout->addWidget(label_5);

        comboBox_2 = new QComboBox(groupBox);
        comboBox_2->setObjectName("comboBox_2");
        sizePolicy.setHeightForWidth(comboBox_2->sizePolicy().hasHeightForWidth());
        comboBox_2->setSizePolicy(sizePolicy);
        comboBox_2->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(comboBox_2);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName("label_6");

        horizontalLayout->addWidget(label_6);

        lineEdit_2 = new QLineEdit(groupBox);
        lineEdit_2->setObjectName("lineEdit_2");
        sizePolicy.setHeightForWidth(lineEdit_2->sizePolicy().hasHeightForWidth());
        lineEdit_2->setSizePolicy(sizePolicy);
        lineEdit_2->setMinimumSize(QSize(120, 0));

        horizontalLayout->addWidget(lineEdit_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        verticalLayout_2->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName("formLayout");
        label_7 = new QLabel(groupBox);
        label_7->setObjectName("label_7");

        formLayout->setWidget(0, QFormLayout::LabelRole, label_7);

        lineEdit_3 = new QLineEdit(groupBox);
        lineEdit_3->setObjectName("lineEdit_3");

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_3);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName("label_8");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_8);

        lineEdit_4 = new QLineEdit(groupBox);
        lineEdit_4->setObjectName("lineEdit_4");

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_4);


        verticalLayout_2->addLayout(formLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        label_9 = new QLabel(groupBox);
        label_9->setObjectName("label_9");

        horizontalLayout_3->addWidget(label_9);

        comboBox_3 = new QComboBox(groupBox);
        comboBox_3->setObjectName("comboBox_3");
        sizePolicy.setHeightForWidth(comboBox_3->sizePolicy().hasHeightForWidth());
        comboBox_3->setSizePolicy(sizePolicy);
        comboBox_3->setMinimumSize(QSize(80, 0));

        horizontalLayout_3->addWidget(comboBox_3);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName("label_10");

        horizontalLayout_3->addWidget(label_10);

        comboBox_4 = new QComboBox(groupBox);
        comboBox_4->setObjectName("comboBox_4");
        sizePolicy.setHeightForWidth(comboBox_4->sizePolicy().hasHeightForWidth());
        comboBox_4->setSizePolicy(sizePolicy);
        comboBox_4->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(comboBox_4);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName("label_11");

        horizontalLayout_3->addWidget(label_11);

        comboBox_5 = new QComboBox(groupBox);
        comboBox_5->setObjectName("comboBox_5");
        sizePolicy.setHeightForWidth(comboBox_5->sizePolicy().hasHeightForWidth());
        comboBox_5->setSizePolicy(sizePolicy);
        comboBox_5->setMinimumSize(QSize(60, 0));

        horizontalLayout_3->addWidget(comboBox_5);

        label_12 = new QLabel(groupBox);
        label_12->setObjectName("label_12");

        horizontalLayout_3->addWidget(label_12);

        lineEdit_5 = new QLineEdit(groupBox);
        lineEdit_5->setObjectName("lineEdit_5");
        sizePolicy.setHeightForWidth(lineEdit_5->sizePolicy().hasHeightForWidth());
        lineEdit_5->setSizePolicy(sizePolicy);
        lineEdit_5->setMinimumSize(QSize(100, 0));

        horizontalLayout_3->addWidget(lineEdit_5);

        label_13 = new QLabel(groupBox);
        label_13->setObjectName("label_13");

        horizontalLayout_3->addWidget(label_13);

        comboBox_6 = new QComboBox(groupBox);
        comboBox_6->setObjectName("comboBox_6");
        sizePolicy.setHeightForWidth(comboBox_6->sizePolicy().hasHeightForWidth());
        comboBox_6->setSizePolicy(sizePolicy);
        comboBox_6->setMinimumSize(QSize(150, 0));

        horizontalLayout_3->addWidget(comboBox_6);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_2->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        label_14 = new QLabel(groupBox);
        label_14->setObjectName("label_14");

        horizontalLayout_4->addWidget(label_14);

        lineEdit_6 = new QLineEdit(groupBox);
        lineEdit_6->setObjectName("lineEdit_6");

        horizontalLayout_4->addWidget(lineEdit_6);

        label_15 = new QLabel(groupBox);
        label_15->setObjectName("label_15");

        horizontalLayout_4->addWidget(label_15);


        verticalLayout_2->addLayout(horizontalLayout_4);


        verticalLayout->addWidget(groupBox);


        retranslateUi(NotasFrame);

        QMetaObject::connectSlotsByName(NotasFrame);
    } // setupUi

    void retranslateUi(QFrame *NotasFrame)
    {
        NotasFrame->setWindowTitle(QCoreApplication::translate("NotasFrame", "Frame", nullptr));
        groupBox->setTitle(QCoreApplication::translate("NotasFrame", "Cabecera:", nullptr));
        label->setText(QCoreApplication::translate("NotasFrame", "Comprobante a modificar:", nullptr));
        pushButton->setText(QCoreApplication::translate("NotasFrame", "Buscar comprobante", nullptr));
        label_2->setText(QCoreApplication::translate("NotasFrame", "Tipo Op.:", nullptr));
        label_3->setText(QCoreApplication::translate("NotasFrame", "Fecha emisi\303\263n:", nullptr));
        label_4->setText(QCoreApplication::translate("NotasFrame", "Fecha vencimiento:", nullptr));
        label_5->setText(QCoreApplication::translate("NotasFrame", "Tipo Doc.:", nullptr));
        label_6->setText(QCoreApplication::translate("NotasFrame", "<html><head/><body><p>N<span style=\" vertical-align:super;\">o</span> Doc.:</p></body></html>", nullptr));
        label_7->setText(QCoreApplication::translate("NotasFrame", "Se\303\261ores:", nullptr));
        label_8->setText(QCoreApplication::translate("NotasFrame", "Direcci\303\263n:", nullptr));
        label_9->setText(QCoreApplication::translate("NotasFrame", "Moneda:", nullptr));
        label_10->setText(QCoreApplication::translate("NotasFrame", "Forma de pago:", nullptr));
        label_11->setText(QCoreApplication::translate("NotasFrame", "Cuotas:", nullptr));
        label_12->setText(QCoreApplication::translate("NotasFrame", "Monto cuota:", nullptr));
        label_13->setText(QCoreApplication::translate("NotasFrame", "Medio pago:", nullptr));
        label_14->setText(QCoreApplication::translate("NotasFrame", "Referencia:", nullptr));
        label_15->setText(QCoreApplication::translate("NotasFrame", "*(Opcional) algun dato importante. Dejar en blanco para no mostrar en PDF.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotasFrame: public Ui_NotasFrame {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTASFRAME_H
