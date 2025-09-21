/********************************************************************************
** Form generated from reading UI file 'facturadormw.ui'
**
** Created by: Qt User Interface Compiler version 6.8.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FACTURADORMW_H
#define UI_FACTURADORMW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FacturadorMW
{
public:
    QAction *archivoAct;
    QAction *ejecutaAct;
    QAction *bandejaAct;
    QAction *configuraAct;
    QAction *cerrarAct;
    QAction *salirAct;
    QAction *comprobanteAct;
    QAction *clienteAct;
    QAction *productoAct;
    QAction *servicioAct;
    QAction *conductorAct;
    QAction *vehiculoAct;
    QAction *proveedorAct;
    QAction *UsuarioAct;
    QAction *showAct;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout;
    QLabel *iconLbl;
    QLabel *messsageLbl;
    QFrame *line_2;
    QLabel *label_2;
    QLineEdit *buscarTxt;
    QHBoxLayout *horizontalLayout_2;
    QStackedWidget *principalStc;
    QWidget *comprobantePage;
    QVBoxLayout *verticalLayout_5;
    QTabWidget *comprobanteTab;
    QWidget *facturaTab;
    QVBoxLayout *verticalLayout_6;
    QTableWidget *facturaTbw;
    QWidget *boletaTab;
    QVBoxLayout *verticalLayout_7;
    QTableWidget *boletaTbw;
    QWidget *ncreditoTab;
    QVBoxLayout *verticalLayout_8;
    QTableWidget *n_creditoTbw;
    QWidget *debitoTab;
    QVBoxLayout *verticalLayout_9;
    QTableWidget *n_debitoTbw;
    QWidget *remisionTab;
    QVBoxLayout *verticalLayout_10;
    QTableWidget *remisionTbw;
    QWidget *bajasTab;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *bajasTbw;
    QWidget *clientesPage;
    QVBoxLayout *verticalLayout_12;
    QTableWidget *clientesTbw;
    QWidget *productosPage;
    QVBoxLayout *verticalLayout_13;
    QTableWidget *productosTbw;
    QWidget *serviciosPage;
    QVBoxLayout *verticalLayout_14;
    QTableWidget *serviciosTbw;
    QWidget *conductoresPage;
    QVBoxLayout *verticalLayout_15;
    QTableWidget *conductoresTbw;
    QWidget *vehiculosPage;
    QVBoxLayout *verticalLayout_16;
    QTableWidget *vehiculosTbw;
    QWidget *proveedorPage;
    QVBoxLayout *verticalLayout_17;
    QTableWidget *proveedorTbw;
    QFrame *rightPanel;
    QVBoxLayout *verticalLayout_3;
    QPushButton *nuevoPb;
    QPushButton *editarPb;
    QPushButton *imprimePb;
    QPushButton *eliminaPb;
    QSpacerItem *verticalSpacer_2;
    QFrame *line_3;
    QPushButton *crearPb;
    QPushButton *consultaPb;
    QPushButton *exportaPb;
    QMenuBar *menubar;
    QMenu *archivoMnu;
    QMenu *administraMnu;
    QMenu *menuVer;
    QDockWidget *leftOptionsDw;
    QWidget *dockWidgetContents_2;
    QVBoxLayout *verticalLayout;
    QPushButton *comprobantePb;
    QPushButton *clientesPb;
    QPushButton *productosPb;
    QPushButton *serviciosPb;
    QPushButton *conductoresPb;
    QPushButton *vehiculosPb;
    QPushButton *proveedorPb;
    QSpacerItem *verticalSpacer;
    QFrame *line;
    QPushButton *ejecutaPb;
    QPushButton *bandejaPb;

    void setupUi(QMainWindow *FacturadorMW)
    {
        if (FacturadorMW->objectName().isEmpty())
            FacturadorMW->setObjectName("FacturadorMW");
        FacturadorMW->resize(969, 546);
        archivoAct = new QAction(FacturadorMW);
        archivoAct->setObjectName("archivoAct");
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/img/iconos/inicio.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        archivoAct->setIcon(icon);
        ejecutaAct = new QAction(FacturadorMW);
        ejecutaAct->setObjectName("ejecutaAct");
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/img/iconos/ejecutarSFS.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        ejecutaAct->setIcon(icon1);
        bandejaAct = new QAction(FacturadorMW);
        bandejaAct->setObjectName("bandejaAct");
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/img/iconos/abrirBandejaSFS.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        bandejaAct->setIcon(icon2);
        configuraAct = new QAction(FacturadorMW);
        configuraAct->setObjectName("configuraAct");
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/img/iconos/configurar.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        configuraAct->setIcon(icon3);
        cerrarAct = new QAction(FacturadorMW);
        cerrarAct->setObjectName("cerrarAct");
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/img/iconos/cerrar_sesion.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        cerrarAct->setIcon(icon4);
        salirAct = new QAction(FacturadorMW);
        salirAct->setObjectName("salirAct");
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/img/iconos/salir.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        salirAct->setIcon(icon5);
        comprobanteAct = new QAction(FacturadorMW);
        comprobanteAct->setObjectName("comprobanteAct");
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/img/iconos/comprobantes.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        comprobanteAct->setIcon(icon6);
        clienteAct = new QAction(FacturadorMW);
        clienteAct->setObjectName("clienteAct");
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/img/iconos/clientes.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        clienteAct->setIcon(icon7);
        productoAct = new QAction(FacturadorMW);
        productoAct->setObjectName("productoAct");
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/img/iconos/productos.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        productoAct->setIcon(icon8);
        servicioAct = new QAction(FacturadorMW);
        servicioAct->setObjectName("servicioAct");
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/img/iconos/servicios.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        servicioAct->setIcon(icon9);
        conductorAct = new QAction(FacturadorMW);
        conductorAct->setObjectName("conductorAct");
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/img/iconos/conductores.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        conductorAct->setIcon(icon10);
        vehiculoAct = new QAction(FacturadorMW);
        vehiculoAct->setObjectName("vehiculoAct");
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/img/iconos/vehiculos.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        vehiculoAct->setIcon(icon11);
        proveedorAct = new QAction(FacturadorMW);
        proveedorAct->setObjectName("proveedorAct");
        QIcon icon12;
        icon12.addFile(QString::fromUtf8(":/img/iconos/proveedores.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        proveedorAct->setIcon(icon12);
        UsuarioAct = new QAction(FacturadorMW);
        UsuarioAct->setObjectName("UsuarioAct");
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/img/iconos/usuarios.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        UsuarioAct->setIcon(icon13);
        showAct = new QAction(FacturadorMW);
        showAct->setObjectName("showAct");
        centralwidget = new QWidget(FacturadorMW);
        centralwidget->setObjectName("centralwidget");
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName("frame_2");
        frame_2->setMinimumSize(QSize(50, 0));
        frame_2->setMaximumSize(QSize(16777215, 50));
        frame_2->setFrameShape(QFrame::Shape::StyledPanel);
        frame_2->setFrameShadow(QFrame::Shadow::Raised);
        horizontalLayout = new QHBoxLayout(frame_2);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        iconLbl = new QLabel(frame_2);
        iconLbl->setObjectName("iconLbl");

        horizontalLayout->addWidget(iconLbl);

        messsageLbl = new QLabel(frame_2);
        messsageLbl->setObjectName("messsageLbl");

        horizontalLayout->addWidget(messsageLbl);

        line_2 = new QFrame(frame_2);
        line_2->setObjectName("line_2");
        line_2->setFrameShape(QFrame::Shape::VLine);
        line_2->setFrameShadow(QFrame::Shadow::Sunken);

        horizontalLayout->addWidget(line_2);

        label_2 = new QLabel(frame_2);
        label_2->setObjectName("label_2");

        horizontalLayout->addWidget(label_2);

        buscarTxt = new QLineEdit(frame_2);
        buscarTxt->setObjectName("buscarTxt");
        buscarTxt->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(buscarTxt);


        verticalLayout_2->addWidget(frame_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        principalStc = new QStackedWidget(centralwidget);
        principalStc->setObjectName("principalStc");
        comprobantePage = new QWidget();
        comprobantePage->setObjectName("comprobantePage");
        verticalLayout_5 = new QVBoxLayout(comprobantePage);
        verticalLayout_5->setSpacing(5);
        verticalLayout_5->setObjectName("verticalLayout_5");
        verticalLayout_5->setContentsMargins(1, 0, 1, 1);
        comprobanteTab = new QTabWidget(comprobantePage);
        comprobanteTab->setObjectName("comprobanteTab");
        facturaTab = new QWidget();
        facturaTab->setObjectName("facturaTab");
        verticalLayout_6 = new QVBoxLayout(facturaTab);
        verticalLayout_6->setObjectName("verticalLayout_6");
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        facturaTbw = new QTableWidget(facturaTab);
        if (facturaTbw->columnCount() < 7)
            facturaTbw->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        facturaTbw->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        facturaTbw->setObjectName("facturaTbw");

        verticalLayout_6->addWidget(facturaTbw);

        comprobanteTab->addTab(facturaTab, QString());
        boletaTab = new QWidget();
        boletaTab->setObjectName("boletaTab");
        verticalLayout_7 = new QVBoxLayout(boletaTab);
        verticalLayout_7->setObjectName("verticalLayout_7");
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        boletaTbw = new QTableWidget(boletaTab);
        if (boletaTbw->columnCount() < 7)
            boletaTbw->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(1, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(2, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(3, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(4, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(5, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        boletaTbw->setHorizontalHeaderItem(6, __qtablewidgetitem13);
        boletaTbw->setObjectName("boletaTbw");

        verticalLayout_7->addWidget(boletaTbw);

        comprobanteTab->addTab(boletaTab, QString());
        ncreditoTab = new QWidget();
        ncreditoTab->setObjectName("ncreditoTab");
        verticalLayout_8 = new QVBoxLayout(ncreditoTab);
        verticalLayout_8->setObjectName("verticalLayout_8");
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        n_creditoTbw = new QTableWidget(ncreditoTab);
        if (n_creditoTbw->columnCount() < 7)
            n_creditoTbw->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(0, __qtablewidgetitem14);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(1, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(2, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(3, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(4, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(5, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        n_creditoTbw->setHorizontalHeaderItem(6, __qtablewidgetitem20);
        n_creditoTbw->setObjectName("n_creditoTbw");

        verticalLayout_8->addWidget(n_creditoTbw);

        comprobanteTab->addTab(ncreditoTab, QString());
        debitoTab = new QWidget();
        debitoTab->setObjectName("debitoTab");
        verticalLayout_9 = new QVBoxLayout(debitoTab);
        verticalLayout_9->setObjectName("verticalLayout_9");
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        n_debitoTbw = new QTableWidget(debitoTab);
        if (n_debitoTbw->columnCount() < 7)
            n_debitoTbw->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(0, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(1, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(2, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(3, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(4, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(5, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        n_debitoTbw->setHorizontalHeaderItem(6, __qtablewidgetitem27);
        n_debitoTbw->setObjectName("n_debitoTbw");

        verticalLayout_9->addWidget(n_debitoTbw);

        comprobanteTab->addTab(debitoTab, QString());
        remisionTab = new QWidget();
        remisionTab->setObjectName("remisionTab");
        verticalLayout_10 = new QVBoxLayout(remisionTab);
        verticalLayout_10->setObjectName("verticalLayout_10");
        verticalLayout_10->setContentsMargins(0, 0, 0, 0);
        remisionTbw = new QTableWidget(remisionTab);
        if (remisionTbw->columnCount() < 6)
            remisionTbw->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(0, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(1, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(2, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(3, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(4, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        remisionTbw->setHorizontalHeaderItem(5, __qtablewidgetitem33);
        remisionTbw->setObjectName("remisionTbw");

        verticalLayout_10->addWidget(remisionTbw);

        comprobanteTab->addTab(remisionTab, QString());
        bajasTab = new QWidget();
        bajasTab->setObjectName("bajasTab");
        verticalLayout_11 = new QVBoxLayout(bajasTab);
        verticalLayout_11->setObjectName("verticalLayout_11");
        verticalLayout_11->setContentsMargins(0, 0, 0, 0);
        bajasTbw = new QTableWidget(bajasTab);
        if (bajasTbw->columnCount() < 5)
            bajasTbw->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        bajasTbw->setHorizontalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        bajasTbw->setHorizontalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        bajasTbw->setHorizontalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        bajasTbw->setHorizontalHeaderItem(3, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        bajasTbw->setHorizontalHeaderItem(4, __qtablewidgetitem38);
        bajasTbw->setObjectName("bajasTbw");

        verticalLayout_11->addWidget(bajasTbw);

        comprobanteTab->addTab(bajasTab, QString());

        verticalLayout_5->addWidget(comprobanteTab);

        principalStc->addWidget(comprobantePage);
        clientesPage = new QWidget();
        clientesPage->setObjectName("clientesPage");
        verticalLayout_12 = new QVBoxLayout(clientesPage);
        verticalLayout_12->setObjectName("verticalLayout_12");
        verticalLayout_12->setContentsMargins(0, 0, 0, 0);
        clientesTbw = new QTableWidget(clientesPage);
        if (clientesTbw->columnCount() < 4)
            clientesTbw->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        clientesTbw->setHorizontalHeaderItem(0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        clientesTbw->setHorizontalHeaderItem(1, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        clientesTbw->setHorizontalHeaderItem(2, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        clientesTbw->setHorizontalHeaderItem(3, __qtablewidgetitem42);
        clientesTbw->setObjectName("clientesTbw");

        verticalLayout_12->addWidget(clientesTbw);

        principalStc->addWidget(clientesPage);
        productosPage = new QWidget();
        productosPage->setObjectName("productosPage");
        verticalLayout_13 = new QVBoxLayout(productosPage);
        verticalLayout_13->setObjectName("verticalLayout_13");
        verticalLayout_13->setContentsMargins(0, 0, 0, 0);
        productosTbw = new QTableWidget(productosPage);
        if (productosTbw->columnCount() < 6)
            productosTbw->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(0, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(2, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(3, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(4, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        productosTbw->setHorizontalHeaderItem(5, __qtablewidgetitem48);
        productosTbw->setObjectName("productosTbw");

        verticalLayout_13->addWidget(productosTbw);

        principalStc->addWidget(productosPage);
        serviciosPage = new QWidget();
        serviciosPage->setObjectName("serviciosPage");
        verticalLayout_14 = new QVBoxLayout(serviciosPage);
        verticalLayout_14->setObjectName("verticalLayout_14");
        verticalLayout_14->setContentsMargins(0, 0, 0, 0);
        serviciosTbw = new QTableWidget(serviciosPage);
        if (serviciosTbw->columnCount() < 6)
            serviciosTbw->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(3, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(4, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        serviciosTbw->setHorizontalHeaderItem(5, __qtablewidgetitem54);
        serviciosTbw->setObjectName("serviciosTbw");

        verticalLayout_14->addWidget(serviciosTbw);

        principalStc->addWidget(serviciosPage);
        conductoresPage = new QWidget();
        conductoresPage->setObjectName("conductoresPage");
        verticalLayout_15 = new QVBoxLayout(conductoresPage);
        verticalLayout_15->setObjectName("verticalLayout_15");
        verticalLayout_15->setContentsMargins(0, 0, 0, 0);
        conductoresTbw = new QTableWidget(conductoresPage);
        if (conductoresTbw->columnCount() < 5)
            conductoresTbw->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        conductoresTbw->setHorizontalHeaderItem(0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        conductoresTbw->setHorizontalHeaderItem(1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        conductoresTbw->setHorizontalHeaderItem(2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        conductoresTbw->setHorizontalHeaderItem(3, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        conductoresTbw->setHorizontalHeaderItem(4, __qtablewidgetitem59);
        conductoresTbw->setObjectName("conductoresTbw");

        verticalLayout_15->addWidget(conductoresTbw);

        principalStc->addWidget(conductoresPage);
        vehiculosPage = new QWidget();
        vehiculosPage->setObjectName("vehiculosPage");
        verticalLayout_16 = new QVBoxLayout(vehiculosPage);
        verticalLayout_16->setObjectName("verticalLayout_16");
        verticalLayout_16->setContentsMargins(0, 0, 0, 0);
        vehiculosTbw = new QTableWidget(vehiculosPage);
        if (vehiculosTbw->columnCount() < 4)
            vehiculosTbw->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        vehiculosTbw->setHorizontalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        vehiculosTbw->setHorizontalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        vehiculosTbw->setHorizontalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        vehiculosTbw->setHorizontalHeaderItem(3, __qtablewidgetitem63);
        vehiculosTbw->setObjectName("vehiculosTbw");

        verticalLayout_16->addWidget(vehiculosTbw);

        principalStc->addWidget(vehiculosPage);
        proveedorPage = new QWidget();
        proveedorPage->setObjectName("proveedorPage");
        verticalLayout_17 = new QVBoxLayout(proveedorPage);
        verticalLayout_17->setObjectName("verticalLayout_17");
        verticalLayout_17->setContentsMargins(0, 0, 0, 0);
        proveedorTbw = new QTableWidget(proveedorPage);
        if (proveedorTbw->columnCount() < 4)
            proveedorTbw->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        proveedorTbw->setHorizontalHeaderItem(0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        proveedorTbw->setHorizontalHeaderItem(1, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        proveedorTbw->setHorizontalHeaderItem(2, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        proveedorTbw->setHorizontalHeaderItem(3, __qtablewidgetitem67);
        proveedorTbw->setObjectName("proveedorTbw");

        verticalLayout_17->addWidget(proveedorTbw);

        principalStc->addWidget(proveedorPage);

        horizontalLayout_2->addWidget(principalStc);

        rightPanel = new QFrame(centralwidget);
        rightPanel->setObjectName("rightPanel");
        rightPanel->setFrameShape(QFrame::Shape::StyledPanel);
        rightPanel->setFrameShadow(QFrame::Shadow::Raised);
        verticalLayout_3 = new QVBoxLayout(rightPanel);
        verticalLayout_3->setSpacing(5);
        verticalLayout_3->setObjectName("verticalLayout_3");
        verticalLayout_3->setContentsMargins(2, 2, 2, 2);
        nuevoPb = new QPushButton(rightPanel);
        nuevoPb->setObjectName("nuevoPb");
        nuevoPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(nuevoPb);

        editarPb = new QPushButton(rightPanel);
        editarPb->setObjectName("editarPb");
        editarPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(editarPb);

        imprimePb = new QPushButton(rightPanel);
        imprimePb->setObjectName("imprimePb");
        imprimePb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(imprimePb);

        eliminaPb = new QPushButton(rightPanel);
        eliminaPb->setObjectName("eliminaPb");
        eliminaPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(eliminaPb);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        line_3 = new QFrame(rightPanel);
        line_3->setObjectName("line_3");
        line_3->setFrameShape(QFrame::Shape::HLine);
        line_3->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout_3->addWidget(line_3);

        crearPb = new QPushButton(rightPanel);
        crearPb->setObjectName("crearPb");
        crearPb->setMinimumSize(QSize(0, 30));
        crearPb->setCheckable(false);
        crearPb->setChecked(false);

        verticalLayout_3->addWidget(crearPb);

        consultaPb = new QPushButton(rightPanel);
        consultaPb->setObjectName("consultaPb");
        consultaPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(consultaPb);

        exportaPb = new QPushButton(rightPanel);
        exportaPb->setObjectName("exportaPb");
        exportaPb->setMinimumSize(QSize(0, 30));

        verticalLayout_3->addWidget(exportaPb);


        horizontalLayout_2->addWidget(rightPanel);


        verticalLayout_2->addLayout(horizontalLayout_2);

        FacturadorMW->setCentralWidget(centralwidget);
        menubar = new QMenuBar(FacturadorMW);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 969, 21));
        archivoMnu = new QMenu(menubar);
        archivoMnu->setObjectName("archivoMnu");
        administraMnu = new QMenu(menubar);
        administraMnu->setObjectName("administraMnu");
        menuVer = new QMenu(menubar);
        menuVer->setObjectName("menuVer");
        FacturadorMW->setMenuBar(menubar);
        leftOptionsDw = new QDockWidget(FacturadorMW);
        leftOptionsDw->setObjectName("leftOptionsDw");
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName("dockWidgetContents_2");
        verticalLayout = new QVBoxLayout(dockWidgetContents_2);
        verticalLayout->setObjectName("verticalLayout");
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        comprobantePb = new QPushButton(dockWidgetContents_2);
        comprobantePb->setObjectName("comprobantePb");
        comprobantePb->setMinimumSize(QSize(0, 30));
        comprobantePb->setIcon(icon6);
        comprobantePb->setFlat(true);

        verticalLayout->addWidget(comprobantePb);

        clientesPb = new QPushButton(dockWidgetContents_2);
        clientesPb->setObjectName("clientesPb");
        clientesPb->setMinimumSize(QSize(0, 30));
        clientesPb->setLayoutDirection(Qt::LayoutDirection::LeftToRight);
        clientesPb->setIcon(icon7);
        clientesPb->setFlat(true);

        verticalLayout->addWidget(clientesPb);

        productosPb = new QPushButton(dockWidgetContents_2);
        productosPb->setObjectName("productosPb");
        productosPb->setMinimumSize(QSize(0, 30));
        productosPb->setIcon(icon8);
        productosPb->setFlat(true);

        verticalLayout->addWidget(productosPb);

        serviciosPb = new QPushButton(dockWidgetContents_2);
        serviciosPb->setObjectName("serviciosPb");
        serviciosPb->setMinimumSize(QSize(0, 30));
        serviciosPb->setIcon(icon9);
        serviciosPb->setFlat(true);

        verticalLayout->addWidget(serviciosPb);

        conductoresPb = new QPushButton(dockWidgetContents_2);
        conductoresPb->setObjectName("conductoresPb");
        conductoresPb->setMinimumSize(QSize(0, 30));
        conductoresPb->setIcon(icon10);
        conductoresPb->setFlat(true);

        verticalLayout->addWidget(conductoresPb);

        vehiculosPb = new QPushButton(dockWidgetContents_2);
        vehiculosPb->setObjectName("vehiculosPb");
        vehiculosPb->setMinimumSize(QSize(0, 30));
        vehiculosPb->setIcon(icon11);
        vehiculosPb->setFlat(true);

        verticalLayout->addWidget(vehiculosPb);

        proveedorPb = new QPushButton(dockWidgetContents_2);
        proveedorPb->setObjectName("proveedorPb");
        proveedorPb->setMinimumSize(QSize(0, 30));
        proveedorPb->setIcon(icon12);
        proveedorPb->setFlat(true);

        verticalLayout->addWidget(proveedorPb);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        line = new QFrame(dockWidgetContents_2);
        line->setObjectName("line");
        line->setLineWidth(2);
        line->setFrameShape(QFrame::Shape::HLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        verticalLayout->addWidget(line);

        ejecutaPb = new QPushButton(dockWidgetContents_2);
        ejecutaPb->setObjectName("ejecutaPb");
        ejecutaPb->setMinimumSize(QSize(0, 30));
        ejecutaPb->setIcon(icon1);
        ejecutaPb->setFlat(true);

        verticalLayout->addWidget(ejecutaPb);

        bandejaPb = new QPushButton(dockWidgetContents_2);
        bandejaPb->setObjectName("bandejaPb");
        bandejaPb->setMinimumSize(QSize(0, 30));
        bandejaPb->setIcon(icon2);
        bandejaPb->setFlat(true);

        verticalLayout->addWidget(bandejaPb);

        leftOptionsDw->setWidget(dockWidgetContents_2);
        FacturadorMW->addDockWidget(Qt::DockWidgetArea::LeftDockWidgetArea, leftOptionsDw);

        menubar->addAction(archivoMnu->menuAction());
        menubar->addAction(administraMnu->menuAction());
        menubar->addAction(menuVer->menuAction());
        archivoMnu->addAction(archivoAct);
        archivoMnu->addAction(ejecutaAct);
        archivoMnu->addAction(bandejaAct);
        archivoMnu->addAction(configuraAct);
        archivoMnu->addAction(cerrarAct);
        archivoMnu->addAction(salirAct);
        administraMnu->addAction(comprobanteAct);
        administraMnu->addAction(clienteAct);
        administraMnu->addAction(productoAct);
        administraMnu->addAction(servicioAct);
        administraMnu->addAction(conductorAct);
        administraMnu->addAction(vehiculoAct);
        administraMnu->addAction(proveedorAct);
        administraMnu->addSeparator();
        administraMnu->addAction(UsuarioAct);
        menuVer->addAction(showAct);

        retranslateUi(FacturadorMW);

        principalStc->setCurrentIndex(0);
        comprobanteTab->setCurrentIndex(0);
        comprobantePb->setDefault(false);


        QMetaObject::connectSlotsByName(FacturadorMW);
    } // setupUi

    void retranslateUi(QMainWindow *FacturadorMW)
    {
        FacturadorMW->setWindowTitle(QCoreApplication::translate("FacturadorMW", "FacturadorMW", nullptr));
        archivoAct->setText(QCoreApplication::translate("FacturadorMW", "Inicio", nullptr));
        ejecutaAct->setText(QCoreApplication::translate("FacturadorMW", "Ejecutar SFS", nullptr));
        bandejaAct->setText(QCoreApplication::translate("FacturadorMW", "Bandeja SFS", nullptr));
        configuraAct->setText(QCoreApplication::translate("FacturadorMW", "Configurar", nullptr));
        cerrarAct->setText(QCoreApplication::translate("FacturadorMW", "Cerrar sesi\303\263n", nullptr));
        salirAct->setText(QCoreApplication::translate("FacturadorMW", "Salir", nullptr));
        comprobanteAct->setText(QCoreApplication::translate("FacturadorMW", "Comprobantes", nullptr));
        clienteAct->setText(QCoreApplication::translate("FacturadorMW", "Clientes", nullptr));
        productoAct->setText(QCoreApplication::translate("FacturadorMW", "Productos", nullptr));
        servicioAct->setText(QCoreApplication::translate("FacturadorMW", "Servicios", nullptr));
        conductorAct->setText(QCoreApplication::translate("FacturadorMW", "Conductores", nullptr));
        vehiculoAct->setText(QCoreApplication::translate("FacturadorMW", "Veh\303\255culos", nullptr));
        proveedorAct->setText(QCoreApplication::translate("FacturadorMW", "Proveedores", nullptr));
        UsuarioAct->setText(QCoreApplication::translate("FacturadorMW", "Usuarios", nullptr));
        showAct->setText(QCoreApplication::translate("FacturadorMW", "Mostrar / ocultar panel de opciones", nullptr));
        iconLbl->setText(QString());
        messsageLbl->setText(QString());
        label_2->setText(QCoreApplication::translate("FacturadorMW", "Buscar:  ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = facturaTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("FacturadorMW", "Factura", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = facturaTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = facturaTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = facturaTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("FacturadorMW", "Moneda", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = facturaTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("FacturadorMW", "Referencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = facturaTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("FacturadorMW", "Importe T.", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = facturaTbw->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(facturaTab), QCoreApplication::translate("FacturadorMW", "Facturas", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = boletaTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("FacturadorMW", "Boleta", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = boletaTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = boletaTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = boletaTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("FacturadorMW", "Moneda", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = boletaTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("FacturadorMW", "Referencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = boletaTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("FacturadorMW", "Importe T.", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = boletaTbw->horizontalHeaderItem(6);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(boletaTab), QCoreApplication::translate("FacturadorMW", "Boletas", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = n_creditoTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("FacturadorMW", "Nota cr\303\251dito", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = n_creditoTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = n_creditoTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = n_creditoTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("FacturadorMW", "Comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = n_creditoTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("FacturadorMW", "Motivo", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = n_creditoTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("FacturadorMW", "Referencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = n_creditoTbw->horizontalHeaderItem(6);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(ncreditoTab), QCoreApplication::translate("FacturadorMW", "N. Cr\303\251dito", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = n_debitoTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("FacturadorMW", "Nota d\303\251bito", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = n_debitoTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = n_debitoTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = n_debitoTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("FacturadorMW", "Comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = n_debitoTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("FacturadorMW", "Motivo", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = n_debitoTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("FacturadorMW", "Referencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = n_debitoTbw->horizontalHeaderItem(6);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(debitoTab), QCoreApplication::translate("FacturadorMW", "N. D\303\251bito", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = remisionTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("FacturadorMW", "G. Remisi\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = remisionTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("FacturadorMW", "Destinatario", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = remisionTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = remisionTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("FacturadorMW", "Motivo", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = remisionTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("FacturadorMW", "Referencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = remisionTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(remisionTab), QCoreApplication::translate("FacturadorMW", "G. Remisi\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = bajasTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("FacturadorMW", "Tipo comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = bajasTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("FacturadorMW", "Comprobante", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = bajasTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("FacturadorMW", "Fecha", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = bajasTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("FacturadorMW", "Baja", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = bajasTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("FacturadorMW", "Motivo", nullptr));
        comprobanteTab->setTabText(comprobanteTab->indexOf(bajasTab), QCoreApplication::translate("FacturadorMW", "Bajas", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = clientesTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("FacturadorMW", "Tipo doc.", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = clientesTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("FacturadorMW", "Nro. doc.", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = clientesTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = clientesTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("FacturadorMW", "Direcci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = productosTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("FacturadorMW", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = productosTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("FacturadorMW", "Descripci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = productosTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("FacturadorMW", "Tipo unidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = productosTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("FacturadorMW", "Precio 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = productosTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("FacturadorMW", "Precio 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = productosTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = serviciosTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("FacturadorMW", "C\303\263digo", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = serviciosTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("FacturadorMW", "Descripci\303\263n", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = serviciosTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("FacturadorMW", "Tipo unidad", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = serviciosTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("FacturadorMW", "Precio 1", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = serviciosTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("FacturadorMW", "Precio 2", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = serviciosTbw->horizontalHeaderItem(5);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = conductoresTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("FacturadorMW", "Tipo doc.", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = conductoresTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("FacturadorMW", "Nro. Doc.", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = conductoresTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("FacturadorMW", "Nombres", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = conductoresTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("FacturadorMW", "Licencia", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = conductoresTbw->horizontalHeaderItem(4);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = vehiculosTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("FacturadorMW", "Marca", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = vehiculosTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("FacturadorMW", "Modelo", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = vehiculosTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("FacturadorMW", "Placa", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = vehiculosTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("FacturadorMW", "Estado", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = proveedorTbw->horizontalHeaderItem(0);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("FacturadorMW", "Tipo doc.", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = proveedorTbw->horizontalHeaderItem(1);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("FacturadorMW", "Nro. Doc", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = proveedorTbw->horizontalHeaderItem(2);
        ___qtablewidgetitem66->setText(QCoreApplication::translate("FacturadorMW", "Nombre/Raz\303\263n social", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = proveedorTbw->horizontalHeaderItem(3);
        ___qtablewidgetitem67->setText(QCoreApplication::translate("FacturadorMW", "Direcci\303\263n", nullptr));
        nuevoPb->setText(QCoreApplication::translate("FacturadorMW", "Nuevo", nullptr));
        editarPb->setText(QCoreApplication::translate("FacturadorMW", "Editar", nullptr));
        imprimePb->setText(QCoreApplication::translate("FacturadorMW", "Imprimir", nullptr));
        eliminaPb->setText(QCoreApplication::translate("FacturadorMW", "Eliminar", nullptr));
        crearPb->setText(QCoreApplication::translate("FacturadorMW", "Crear TXT", nullptr));
        consultaPb->setText(QCoreApplication::translate("FacturadorMW", "Consulta estado CPE", nullptr));
        exportaPb->setText(QCoreApplication::translate("FacturadorMW", "Exportar", nullptr));
        archivoMnu->setTitle(QCoreApplication::translate("FacturadorMW", "Archivo", nullptr));
        administraMnu->setTitle(QCoreApplication::translate("FacturadorMW", "Administrar", nullptr));
        menuVer->setTitle(QCoreApplication::translate("FacturadorMW", "Ver", nullptr));
        comprobantePb->setText(QCoreApplication::translate("FacturadorMW", "Comprobantes", nullptr));
        clientesPb->setText(QCoreApplication::translate("FacturadorMW", "Clientes", nullptr));
        productosPb->setText(QCoreApplication::translate("FacturadorMW", "Productos", nullptr));
        serviciosPb->setText(QCoreApplication::translate("FacturadorMW", "Servicios", nullptr));
        conductoresPb->setText(QCoreApplication::translate("FacturadorMW", "Conductores", nullptr));
        vehiculosPb->setText(QCoreApplication::translate("FacturadorMW", "Veh\303\255culos", nullptr));
        proveedorPb->setText(QCoreApplication::translate("FacturadorMW", "Proveedores", nullptr));
        ejecutaPb->setText(QCoreApplication::translate("FacturadorMW", "Ejecutar SFS", nullptr));
        bandejaPb->setText(QCoreApplication::translate("FacturadorMW", "Bandeja SFS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FacturadorMW: public Ui_FacturadorMW {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FACTURADORMW_H
