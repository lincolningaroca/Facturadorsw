/********************************************************************************
** Form generated from reading UI file 'bajadialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAJADIALOG_H
#define UI_BAJADIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BajaDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *horizontalSpacer;
    QLabel *label_2;
    QDateEdit *dateEdit;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_3;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_3;
    QDateEdit *dateEdit_2;
    QPushButton *pushButton;
    QLabel *label_4;
    QComboBox *comboBox;
    QPushButton *pushButton_2;
    QSpacerItem *verticalSpacer;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget_2;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QSpacerItem *verticalSpacer_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;

    void setupUi(QDialog *BajaDialog)
    {
        if (BajaDialog->objectName().isEmpty())
            BajaDialog->setObjectName("BajaDialog");
        BajaDialog->resize(908, 568);
        verticalLayout_3 = new QVBoxLayout(BajaDialog);
        verticalLayout_3->setObjectName("verticalLayout_3");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(BajaDialog);
        label->setObjectName("label");

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(BajaDialog);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(295, 0));

        horizontalLayout->addWidget(lineEdit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_2 = new QLabel(BajaDialog);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        dateEdit = new QDateEdit(BajaDialog);
        dateEdit->setObjectName("dateEdit");

        horizontalLayout->addWidget(dateEdit);


        verticalLayout_3->addLayout(horizontalLayout);

        groupBox = new QGroupBox(BajaDialog);
        groupBox->setObjectName("groupBox");
        horizontalLayout_3 = new QHBoxLayout(groupBox);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        tableWidget->setObjectName("tableWidget");

        horizontalLayout_3->addWidget(tableWidget);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        label_3 = new QLabel(groupBox);
        label_3->setObjectName("label_3");

        horizontalLayout_2->addWidget(label_3);

        dateEdit_2 = new QDateEdit(groupBox);
        dateEdit_2->setObjectName("dateEdit_2");

        horizontalLayout_2->addWidget(dateEdit_2);


        verticalLayout->addLayout(horizontalLayout_2);

        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName("pushButton");

        verticalLayout->addWidget(pushButton);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName("label_4");

        verticalLayout->addWidget(label_4);

        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName("comboBox");

        verticalLayout->addWidget(comboBox);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName("pushButton_2");

        verticalLayout->addWidget(pushButton_2);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);


        horizontalLayout_3->addLayout(verticalLayout);


        verticalLayout_3->addWidget(groupBox);

        groupBox_2 = new QGroupBox(BajaDialog);
        groupBox_2->setObjectName("groupBox_2");
        horizontalLayout_4 = new QHBoxLayout(groupBox_2);
        horizontalLayout_4->setObjectName("horizontalLayout_4");
        tableWidget_2 = new QTableWidget(groupBox_2);
        if (tableWidget_2->columnCount() < 3)
            tableWidget_2->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(2, __qtablewidgetitem5);
        tableWidget_2->setObjectName("tableWidget_2");

        horizontalLayout_4->addWidget(tableWidget_2);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");

        verticalLayout_2->addWidget(pushButton_3);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");

        verticalLayout_2->addWidget(pushButton_5);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        verticalLayout_2->addWidget(pushButton_4);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName("pushButton_6");

        verticalLayout_2->addWidget(pushButton_6);


        horizontalLayout_4->addLayout(verticalLayout_2);


        verticalLayout_3->addWidget(groupBox_2);


        retranslateUi(BajaDialog);

        QMetaObject::connectSlotsByName(BajaDialog);
    } // setupUi

    void retranslateUi(QDialog *BajaDialog)
    {
        BajaDialog->setWindowTitle(QCoreApplication::translate("BajaDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("BajaDialog", "<html><head/><body><p><span style=\" font-weight:700;\">Baja N</span><span style=\" font-weight:700; vertical-align:super;\">o  </span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("BajaDialog", "TextLabel", nullptr));
        groupBox->setTitle(QCoreApplication::translate("BajaDialog", "Buscar comprobantes:", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("BajaDialog", "Tipo comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("BajaDialog", "Comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("BajaDialog", "Cliente", nullptr));
        label_3->setText(QCoreApplication::translate("BajaDialog", "Fecha:", nullptr));
        pushButton->setText(QCoreApplication::translate("BajaDialog", "Buscar", nullptr));
        label_4->setText(QCoreApplication::translate("BajaDialog", "Motivo:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("BajaDialog", "Agregar", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("BajaDialog", "Comprobantes a anular:", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("BajaDialog", "Tipo comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("BajaDialog", "Comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_2->horizontalHeaderItem(2);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("BajaDialog", "Motivo", nullptr));
        pushButton_3->setText(QCoreApplication::translate("BajaDialog", "Crear archivos planos", nullptr));
        pushButton_5->setText(QCoreApplication::translate("BajaDialog", "Imprimir", nullptr));
        pushButton_4->setText(QCoreApplication::translate("BajaDialog", "Nueva baja", nullptr));
        pushButton_6->setText(QCoreApplication::translate("BajaDialog", "Volver", nullptr));
    } // retranslateUi

};

namespace Ui {
    class BajaDialog: public Ui_BajaDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAJADIALOG_H
