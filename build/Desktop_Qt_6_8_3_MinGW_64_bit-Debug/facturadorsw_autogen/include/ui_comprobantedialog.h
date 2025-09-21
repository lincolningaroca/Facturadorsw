/********************************************************************************
** Form generated from reading UI file 'comprobantedialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMPROBANTEDIALOG_H
#define UI_COMPROBANTEDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComprobanteDialog
{
public:
    QVBoxLayout *verticalLayout_6;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QLabel *TipoLbl;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_3;
    QDateEdit *dateEdit;
    QLabel *vencimientoLbl;
    QDateEdit *vencimientoDe;
    QVBoxLayout *headerLayout;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_14;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_16;
    QLineEdit *lineEdit_7;
    QLabel *label_17;
    QLineEdit *lineEdit_8;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_19;
    QComboBox *unidadesCbo;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_21;
    QComboBox *comboBox_9;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_18;
    QLineEdit *lineEdit_9;
    QToolButton *toolButton;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_20;
    QComboBox *comboBox_8;
    QSpacerItem *horizontalSpacer_5;
    QHBoxLayout *horizontalLayout_13;
    QComboBox *comboBox_10;
    QSpacerItem *horizontalSpacer_6;
    QGridLayout *gridLayout;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QTableWidget *tableWidget;
    QHBoxLayout *horizontalLayout_7;
    QVBoxLayout *verticalLayout_3;
    QGridLayout *gridLayout_2;
    QLabel *label_22;
    QCheckBox *checkBox;
    QLabel *label_23;
    QLineEdit *lineEdit_10;
    QLabel *label_25;
    QLineEdit *lineEdit_12;
    QCheckBox *checkBox_2;
    QLabel *label_24;
    QLineEdit *lineEdit_11;
    QLabel *label_26;
    QLineEdit *lineEdit_13;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_27;
    QLineEdit *lineEdit_14;
    QLabel *label_28;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QSpacerItem *horizontalSpacer;
    QFrame *frame;
    QFormLayout *formLayout_2;
    QLabel *label_29;
    QLineEdit *lineEdit_15;
    QLabel *label_30;
    QLineEdit *lineEdit_16;
    QLabel *label_31;
    QLineEdit *lineEdit_17;
    QLabel *label_32;
    QLineEdit *lineEdit_18;
    QLabel *label_33;
    QLineEdit *lineEdit_19;
    QLabel *label_34;
    QLineEdit *lineEdit_20;

    void setupUi(QDialog *ComprobanteDialog)
    {
        if (ComprobanteDialog->objectName().isEmpty())
            ComprobanteDialog->setObjectName("ComprobanteDialog");
        ComprobanteDialog->resize(1013, 490);
        verticalLayout_6 = new QVBoxLayout(ComprobanteDialog);
        verticalLayout_6->setObjectName("verticalLayout_6");
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        label = new QLabel(ComprobanteDialog);
        label->setObjectName("label");
        label->setMinimumSize(QSize(0, 21));
        label->setMaximumSize(QSize(16777215, 21));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(ComprobanteDialog);
        lineEdit->setObjectName("lineEdit");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(lineEdit->sizePolicy().hasHeightForWidth());
        lineEdit->setSizePolicy(sizePolicy);
        lineEdit->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(lineEdit);

        TipoLbl = new QLabel(ComprobanteDialog);
        TipoLbl->setObjectName("TipoLbl");

        horizontalLayout->addWidget(TipoLbl);

        comboBox = new QComboBox(ComprobanteDialog);
        comboBox->setObjectName("comboBox");
        sizePolicy.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy);
        comboBox->setMinimumSize(QSize(200, 0));

        horizontalLayout->addWidget(comboBox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_3 = new QLabel(ComprobanteDialog);
        label_3->setObjectName("label_3");

        horizontalLayout->addWidget(label_3);

        dateEdit = new QDateEdit(ComprobanteDialog);
        dateEdit->setObjectName("dateEdit");
        dateEdit->setCalendarPopup(true);

        horizontalLayout->addWidget(dateEdit);

        vencimientoLbl = new QLabel(ComprobanteDialog);
        vencimientoLbl->setObjectName("vencimientoLbl");

        horizontalLayout->addWidget(vencimientoLbl);

        vencimientoDe = new QDateEdit(ComprobanteDialog);
        vencimientoDe->setObjectName("vencimientoDe");
        vencimientoDe->setCalendarPopup(true);

        horizontalLayout->addWidget(vencimientoDe);


        verticalLayout_6->addLayout(horizontalLayout);

        headerLayout = new QVBoxLayout();
        headerLayout->setSpacing(4);
        headerLayout->setObjectName("headerLayout");

        verticalLayout_6->addLayout(headerLayout);

        groupBox_2 = new QGroupBox(ComprobanteDialog);
        groupBox_2->setObjectName("groupBox_2");
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setSpacing(3);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(1, 1, 1, 1);
        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName("horizontalLayout_14");
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName("verticalLayout_2");
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName("horizontalLayout_8");
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName("label_16");

        horizontalLayout_8->addWidget(label_16);

        lineEdit_7 = new QLineEdit(groupBox_2);
        lineEdit_7->setObjectName("lineEdit_7");
        sizePolicy.setHeightForWidth(lineEdit_7->sizePolicy().hasHeightForWidth());
        lineEdit_7->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lineEdit_7);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName("label_17");

        horizontalLayout_8->addWidget(label_17);

        lineEdit_8 = new QLineEdit(groupBox_2);
        lineEdit_8->setObjectName("lineEdit_8");
        sizePolicy.setHeightForWidth(lineEdit_8->sizePolicy().hasHeightForWidth());
        lineEdit_8->setSizePolicy(sizePolicy);

        horizontalLayout_8->addWidget(lineEdit_8);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName("horizontalLayout_9");
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName("label_19");

        horizontalLayout_9->addWidget(label_19);

        unidadesCbo = new QComboBox(groupBox_2);
        unidadesCbo->setObjectName("unidadesCbo");
        sizePolicy.setHeightForWidth(unidadesCbo->sizePolicy().hasHeightForWidth());
        unidadesCbo->setSizePolicy(sizePolicy);
        unidadesCbo->setMinimumSize(QSize(200, 0));

        horizontalLayout_9->addWidget(unidadesCbo);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName("horizontalLayout_10");
        label_21 = new QLabel(groupBox_2);
        label_21->setObjectName("label_21");

        horizontalLayout_10->addWidget(label_21);

        comboBox_9 = new QComboBox(groupBox_2);
        comboBox_9->setObjectName("comboBox_9");
        sizePolicy.setHeightForWidth(comboBox_9->sizePolicy().hasHeightForWidth());
        comboBox_9->setSizePolicy(sizePolicy);
        comboBox_9->setMinimumSize(QSize(200, 0));

        horizontalLayout_10->addWidget(comboBox_9);


        verticalLayout_2->addLayout(horizontalLayout_10);


        horizontalLayout_14->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setObjectName("verticalLayout_4");
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName("horizontalLayout_11");
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName("label_18");

        horizontalLayout_11->addWidget(label_18);

        lineEdit_9 = new QLineEdit(groupBox_2);
        lineEdit_9->setObjectName("lineEdit_9");

        horizontalLayout_11->addWidget(lineEdit_9);

        toolButton = new QToolButton(groupBox_2);
        toolButton->setObjectName("toolButton");
        sizePolicy.setHeightForWidth(toolButton->sizePolicy().hasHeightForWidth());
        toolButton->setSizePolicy(sizePolicy);
        toolButton->setMinimumSize(QSize(30, 0));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/iconos/lupa.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        toolButton->setIcon(icon);

        horizontalLayout_11->addWidget(toolButton);


        verticalLayout_4->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName("horizontalLayout_12");
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName("label_20");

        horizontalLayout_12->addWidget(label_20);

        comboBox_8 = new QComboBox(groupBox_2);
        comboBox_8->setObjectName("comboBox_8");
        sizePolicy.setHeightForWidth(comboBox_8->sizePolicy().hasHeightForWidth());
        comboBox_8->setSizePolicy(sizePolicy);
        comboBox_8->setMinimumSize(QSize(100, 0));

        horizontalLayout_12->addWidget(comboBox_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_12->addItem(horizontalSpacer_5);


        verticalLayout_4->addLayout(horizontalLayout_12);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName("horizontalLayout_13");
        comboBox_10 = new QComboBox(groupBox_2);
        comboBox_10->setObjectName("comboBox_10");
        sizePolicy.setHeightForWidth(comboBox_10->sizePolicy().hasHeightForWidth());
        comboBox_10->setSizePolicy(sizePolicy);

        horizontalLayout_13->addWidget(comboBox_10);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_13->addItem(horizontalSpacer_6);


        verticalLayout_4->addLayout(horizontalLayout_13);


        horizontalLayout_14->addLayout(verticalLayout_4);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        pushButton_3 = new QPushButton(groupBox_2);
        pushButton_3->setObjectName("pushButton_3");

        gridLayout->addWidget(pushButton_3, 0, 0, 1, 1);

        pushButton_5 = new QPushButton(groupBox_2);
        pushButton_5->setObjectName("pushButton_5");

        gridLayout->addWidget(pushButton_5, 0, 1, 1, 1);

        pushButton_4 = new QPushButton(groupBox_2);
        pushButton_4->setObjectName("pushButton_4");

        gridLayout->addWidget(pushButton_4, 1, 0, 1, 1);

        pushButton_6 = new QPushButton(groupBox_2);
        pushButton_6->setObjectName("pushButton_6");

        gridLayout->addWidget(pushButton_6, 1, 1, 1, 1);


        horizontalLayout_14->addLayout(gridLayout);


        verticalLayout_5->addLayout(horizontalLayout_14);

        tableWidget = new QTableWidget(groupBox_2);
        if (tableWidget->columnCount() < 10)
            tableWidget->setColumnCount(10);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(7, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(8, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(9, __qtablewidgetitem9);
        tableWidget->setObjectName("tableWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setMinimumSize(QSize(0, 105));

        verticalLayout_5->addWidget(tableWidget);


        verticalLayout_6->addWidget(groupBox_2);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(0);
        horizontalLayout_7->setObjectName("horizontalLayout_7");
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName("verticalLayout_3");
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_22 = new QLabel(ComprobanteDialog);
        label_22->setObjectName("label_22");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy2);
        label_22->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(label_22, 0, 0, 1, 2);

        checkBox = new QCheckBox(ComprobanteDialog);
        checkBox->setObjectName("checkBox");

        gridLayout_2->addWidget(checkBox, 1, 0, 1, 1);

        label_23 = new QLabel(ComprobanteDialog);
        label_23->setObjectName("label_23");

        gridLayout_2->addWidget(label_23, 1, 1, 1, 1);

        lineEdit_10 = new QLineEdit(ComprobanteDialog);
        lineEdit_10->setObjectName("lineEdit_10");

        gridLayout_2->addWidget(lineEdit_10, 1, 2, 1, 1);

        label_25 = new QLabel(ComprobanteDialog);
        label_25->setObjectName("label_25");

        gridLayout_2->addWidget(label_25, 1, 3, 1, 1);

        lineEdit_12 = new QLineEdit(ComprobanteDialog);
        lineEdit_12->setObjectName("lineEdit_12");

        gridLayout_2->addWidget(lineEdit_12, 1, 4, 1, 1);

        checkBox_2 = new QCheckBox(ComprobanteDialog);
        checkBox_2->setObjectName("checkBox_2");

        gridLayout_2->addWidget(checkBox_2, 2, 0, 1, 1);

        label_24 = new QLabel(ComprobanteDialog);
        label_24->setObjectName("label_24");

        gridLayout_2->addWidget(label_24, 2, 1, 1, 1);

        lineEdit_11 = new QLineEdit(ComprobanteDialog);
        lineEdit_11->setObjectName("lineEdit_11");

        gridLayout_2->addWidget(lineEdit_11, 2, 2, 1, 1);

        label_26 = new QLabel(ComprobanteDialog);
        label_26->setObjectName("label_26");

        gridLayout_2->addWidget(label_26, 2, 3, 1, 1);

        lineEdit_13 = new QLineEdit(ComprobanteDialog);
        lineEdit_13->setObjectName("lineEdit_13");

        gridLayout_2->addWidget(lineEdit_13, 2, 4, 1, 1);


        verticalLayout_3->addLayout(gridLayout_2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName("horizontalLayout_5");
        label_27 = new QLabel(ComprobanteDialog);
        label_27->setObjectName("label_27");

        horizontalLayout_5->addWidget(label_27);

        lineEdit_14 = new QLineEdit(ComprobanteDialog);
        lineEdit_14->setObjectName("lineEdit_14");

        horizontalLayout_5->addWidget(lineEdit_14);

        label_28 = new QLabel(ComprobanteDialog);
        label_28->setObjectName("label_28");
        sizePolicy2.setHeightForWidth(label_28->sizePolicy().hasHeightForWidth());
        label_28->setSizePolicy(sizePolicy2);

        horizontalLayout_5->addWidget(label_28);


        verticalLayout_3->addLayout(horizontalLayout_5);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName("horizontalLayout_6");
        pushButton_7 = new QPushButton(ComprobanteDialog);
        pushButton_7->setObjectName("pushButton_7");

        horizontalLayout_6->addWidget(pushButton_7);

        pushButton_8 = new QPushButton(ComprobanteDialog);
        pushButton_8->setObjectName("pushButton_8");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/iconos/imprimir.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_8->setIcon(icon1);

        horizontalLayout_6->addWidget(pushButton_8);

        pushButton_9 = new QPushButton(ComprobanteDialog);
        pushButton_9->setObjectName("pushButton_9");

        horizontalLayout_6->addWidget(pushButton_9);

        pushButton_10 = new QPushButton(ComprobanteDialog);
        pushButton_10->setObjectName("pushButton_10");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/iconos/volver.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_10->setIcon(icon2);

        horizontalLayout_6->addWidget(pushButton_10);


        verticalLayout_3->addLayout(horizontalLayout_6);


        horizontalLayout_7->addLayout(verticalLayout_3);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_7->addItem(horizontalSpacer);

        frame = new QFrame(ComprobanteDialog);
        frame->setObjectName("frame");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(frame->sizePolicy().hasHeightForWidth());
        frame->setSizePolicy(sizePolicy3);
        frame->setMinimumSize(QSize(250, 0));
        frame->setFrameShape(QFrame::Shape::StyledPanel);
        frame->setFrameShadow(QFrame::Shadow::Raised);
        formLayout_2 = new QFormLayout(frame);
        formLayout_2->setObjectName("formLayout_2");
        label_29 = new QLabel(frame);
        label_29->setObjectName("label_29");

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_29);

        lineEdit_15 = new QLineEdit(frame);
        lineEdit_15->setObjectName("lineEdit_15");

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_15);

        label_30 = new QLabel(frame);
        label_30->setObjectName("label_30");

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_30);

        lineEdit_16 = new QLineEdit(frame);
        lineEdit_16->setObjectName("lineEdit_16");

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_16);

        label_31 = new QLabel(frame);
        label_31->setObjectName("label_31");

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_31);

        lineEdit_17 = new QLineEdit(frame);
        lineEdit_17->setObjectName("lineEdit_17");

        formLayout_2->setWidget(2, QFormLayout::FieldRole, lineEdit_17);

        label_32 = new QLabel(frame);
        label_32->setObjectName("label_32");

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_32);

        lineEdit_18 = new QLineEdit(frame);
        lineEdit_18->setObjectName("lineEdit_18");

        formLayout_2->setWidget(3, QFormLayout::FieldRole, lineEdit_18);

        label_33 = new QLabel(frame);
        label_33->setObjectName("label_33");

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_33);

        lineEdit_19 = new QLineEdit(frame);
        lineEdit_19->setObjectName("lineEdit_19");

        formLayout_2->setWidget(4, QFormLayout::FieldRole, lineEdit_19);

        label_34 = new QLabel(frame);
        label_34->setObjectName("label_34");

        formLayout_2->setWidget(5, QFormLayout::LabelRole, label_34);

        lineEdit_20 = new QLineEdit(frame);
        lineEdit_20->setObjectName("lineEdit_20");

        formLayout_2->setWidget(5, QFormLayout::FieldRole, lineEdit_20);


        horizontalLayout_7->addWidget(frame);


        verticalLayout_6->addLayout(horizontalLayout_7);


        retranslateUi(ComprobanteDialog);

        QMetaObject::connectSlotsByName(ComprobanteDialog);
    } // setupUi

    void retranslateUi(QDialog *ComprobanteDialog)
    {
        ComprobanteDialog->setWindowTitle(QCoreApplication::translate("ComprobanteDialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ComprobanteDialog", "<html><head/><body><p><span style=\" font-weight:700;\">Factura N</span><span style=\" font-weight:700; vertical-align:super;\">o</span></p><p><br/></p></body></html>", nullptr));
        TipoLbl->setText(QCoreApplication::translate("ComprobanteDialog", "Tipo operaci\303\263n:", nullptr));
        label_3->setText(QCoreApplication::translate("ComprobanteDialog", "Fecha emisi\303\263n:", nullptr));
        vencimientoLbl->setText(QCoreApplication::translate("ComprobanteDialog", "Fecha vencimiento:", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("ComprobanteDialog", "Detalle:", nullptr));
        label_16->setText(QCoreApplication::translate("ComprobanteDialog", "Cantidad:", nullptr));
        label_17->setText(QCoreApplication::translate("ComprobanteDialog", "C\303\263digo:", nullptr));
        lineEdit_8->setText(QString());
        label_19->setText(QCoreApplication::translate("ComprobanteDialog", "Tipo unidad:", nullptr));
        label_21->setText(QCoreApplication::translate("ComprobanteDialog", "Tributo:", nullptr));
        label_18->setText(QCoreApplication::translate("ComprobanteDialog", "Descripci\303\263n:", nullptr));
        toolButton->setText(QCoreApplication::translate("ComprobanteDialog", "...", nullptr));
        label_20->setText(QCoreApplication::translate("ComprobanteDialog", "P. unitario.:", nullptr));
        pushButton_3->setText(QCoreApplication::translate("ComprobanteDialog", "Agregar", nullptr));
        pushButton_5->setText(QCoreApplication::translate("ComprobanteDialog", "Quitar", nullptr));
        pushButton_4->setText(QCoreApplication::translate("ComprobanteDialog", "Editar", nullptr));
        pushButton_6->setText(QCoreApplication::translate("ComprobanteDialog", "Actualizar", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("ComprobanteDialog", "#", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("ComprobanteDialog", "Cantidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("ComprobanteDialog", "Tipo unidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("ComprobanteDialog", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("ComprobanteDialog", "Descripci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("ComprobanteDialog", "P. unitario", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("ComprobanteDialog", "Tributo", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->horizontalHeaderItem(7);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("ComprobanteDialog", "% tributo", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->horizontalHeaderItem(8);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("ComprobanteDialog", "Monto tributo", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->horizontalHeaderItem(9);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("ComprobanteDialog", "Importe", nullptr));
        label_22->setText(QCoreApplication::translate("ComprobanteDialog", "<html><head/><body><p><span style=\" font-weight:700;\">Son: CERO CON 00/100 SOLES.</span></p></body></html>", nullptr));
        checkBox->setText(QCoreApplication::translate("ComprobanteDialog", "Aplica retenci\303\263n", nullptr));
        label_23->setText(QCoreApplication::translate("ComprobanteDialog", "Porcentaje retenci\303\263n:", nullptr));
        label_25->setText(QCoreApplication::translate("ComprobanteDialog", "Importe retenci\303\263n:", nullptr));
        checkBox_2->setText(QCoreApplication::translate("ComprobanteDialog", "Aplica detracci\303\263n", nullptr));
        label_24->setText(QCoreApplication::translate("ComprobanteDialog", "Porcentaje detracci\303\263n:", nullptr));
        label_26->setText(QCoreApplication::translate("ComprobanteDialog", "Importe retenci\303\263n:", nullptr));
        label_27->setText(QCoreApplication::translate("ComprobanteDialog", "Monto neto pendiente de pago:", nullptr));
        label_28->setText(QCoreApplication::translate("ComprobanteDialog", "*Solo para forma de pago cr\303\251dito", nullptr));
        pushButton_7->setText(QCoreApplication::translate("ComprobanteDialog", "Crear", nullptr));
        pushButton_8->setText(QCoreApplication::translate("ComprobanteDialog", "Imprimir", nullptr));
        pushButton_9->setText(QCoreApplication::translate("ComprobanteDialog", "Nuevo", nullptr));
        pushButton_10->setText(QCoreApplication::translate("ComprobanteDialog", "Volver", nullptr));
        label_29->setText(QCoreApplication::translate("ComprobanteDialog", "Importe:", nullptr));
        label_30->setText(QCoreApplication::translate("ComprobanteDialog", "Op. gratuitas:", nullptr));
        label_31->setText(QCoreApplication::translate("ComprobanteDialog", "Op. exoneradas:", nullptr));
        label_32->setText(QCoreApplication::translate("ComprobanteDialog", "Op. inafectas:", nullptr));
        label_33->setText(QCoreApplication::translate("ComprobanteDialog", "IGV:", nullptr));
        label_34->setText(QCoreApplication::translate("ComprobanteDialog", "Importe: Total:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComprobanteDialog: public Ui_ComprobanteDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMPROBANTEDIALOG_H
