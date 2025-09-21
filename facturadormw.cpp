#include "facturadormw.hpp"
#include "./ui_facturadormw.h"

#include "clientedialog.hpp"
#include "productodialog.hpp"
#include "vehiculodialog.hpp"
#include "comprobantedialog.hpp"
#include "guiaremisiondialog.hpp"
#include "bajadialog.hpp"

FacturadorMW::FacturadorMW(QWidget *parent):
  QMainWindow(parent), ui(new Ui::FacturadorMW)
{
  ui->setupUi(this);

  ui->principalStc->setCurrentIndex(0);
  setHeaderData(0, ":/img/iconos/comprobantes.png", "Comprobantes electrónicos");

  setUpLeftMenuButtons();


  QObject::connect(ui->nuevoPb, &QPushButton::clicked, this, [&](){

    auto currentIndex = ui->principalStc->currentIndex();

    switch (currentIndex) {
      case 0:{
          showPanelByIndex(ui->comprobanteTab->currentIndex());
          break;
        }
      case 1:{
          ClienteDialog clienteDialog(SW::NEW, SW::CLIENT, this);
          clienteDialog.exec();
          break;
        }
      case 2:{
          ProductoDialog productoDialog(SW::NEW, SW::PRODUCT, this);
          productoDialog.exec();
          break;
        }
      case 3:{
          ProductoDialog serviceDialog(SW::NEW, SW::SERVICE, this);
          serviceDialog.exec();
          break;
        }
      case 4:{
          ClienteDialog clienteDialog(SW::NEW, SW::DRIVER, this);
          clienteDialog.exec();
          break;
        }
      case 5:{
          VehiculoDialog vehiculoDialog(SW::NEW, this);
          vehiculoDialog.exec();
          break;
        }
      case 6:{
          ClienteDialog providerDialog(SW::NEW, SW::PROVIDER, this);
          providerDialog.exec();
          break;
        }
      default:
        break;
    }



  });

  QObject::connect(ui->editarPb, &QPushButton::clicked, this, [this](){

    auto currentIndex = ui->principalStc->currentIndex();

    switch (currentIndex) {
      case 0:
        break;
      case 1:{
          ClienteDialog clienteDialog(SW::EDIT, SW::CLIENT, this);
          clienteDialog.exec();
          break;
        }
      case 2:{
          ProductoDialog productoDialog(SW::EDIT, SW::PRODUCT, this);
          productoDialog.exec();
          break;
        }
      case 3:{
          ProductoDialog serviceDialog(SW::EDIT, SW::SERVICE, this);
          serviceDialog.exec();
          break;
        }
      case 4:{
          ClienteDialog clienteDialog(SW::EDIT, SW::DRIVER, this);
          clienteDialog.exec();
          break;
        }
      case 5:{
          VehiculoDialog vehiculoDialog(SW::EDIT, this);
          vehiculoDialog.exec();
          break;
        }
      case 6:{
          ClienteDialog providerDialog(SW::EDIT, SW::PROVIDER, this);
          providerDialog.exec();
          break;
        }
      default:
        break;
    }



  });

  ui->showAct->setCheckable(true);
  ui->showAct->setChecked(true);
  ui->showAct->setShortcut(QKeySequence(Qt::CTRL | Qt::Key_0));
  QObject::connect(ui->showAct, &QAction::toggled, this, [&](bool checked){

    ui->leftOptionsDw->setVisible(checked);
  });

  ui->leftOptionsDw->setMaximumWidth(ui->leftOptionsDw->geometry().width()*2);
  QObject::connect(ui->leftOptionsDw, &QDockWidget::visibilityChanged, this, [&](bool visible){

    ui->showAct->setChecked(visible);
  });

}

FacturadorMW::~FacturadorMW()
{
  delete ui;
}

void FacturadorMW::setHeaderData(int index, const QString& icon, const QString& text) const{

  ui->principalStc->setCurrentIndex(index);

  QPixmap comprobanteIcon(icon);
  ui->iconLbl->setPixmap(comprobanteIcon.scaled(20,20));
  const auto msg = QString("<p style= \"margin-left:5px; margin-right:150px;\"><strong>%1</strong></p>").arg(text);
  ui->messsageLbl->setText(msg);

}

void FacturadorMW::manageTicketButtons(bool op) const{

  ui->crearPb->setVisible(op);
  ui->consultaPb->setVisible(op);
  ui->exportaPb->setVisible(op);

  auto minimumWidth = ui->consultaPb->width();

  (op) ? ui->nuevoPb->setMinimumWidth(0) : ui->nuevoPb->setMinimumWidth(minimumWidth);

}

void FacturadorMW::managePaneles(bool op) const{

  ui->rightPanel->setVisible(op);
  ui->frame_2->setVisible(op);

}

void FacturadorMW::showPanelByIndex(int index) {


  switch (index) {
    case 0:{
        instanceComprobanteDialog(SW::FACTURA);
        break;

      }
    case 1:{
        instanceComprobanteDialog(SW::BOLETA);
        break;

      }
    case 2:{
        instanceComprobanteDialog(SW::N_CREDITO);
        break;
      }
    case 3:{
        instanceComprobanteDialog(SW::N_DEBITO);
        break;
      }
    case 4:{

        GuiaRemisionDialog guiaRemisionDialog(this);
        guiaRemisionDialog.exec();
        break;
      }
    case 5:{

        BajaDialog BajaDialog(this);
        BajaDialog.exec();
        break;
      }
    default:
      break;
  }

}

void FacturadorMW::setUpLeftMenuButtons() const{

  QObject::connect(ui->comprobantePb, &QPushButton::clicked, this, [this](){

    setHeaderData(0, ":/img/iconos/comprobantes.png", "Comprobantes electrónicos");
    manageTicketButtons(true);
    managePaneles(true);

  });

  QObject::connect(ui->clientesPb, &QPushButton::clicked, this, [this](){

    setHeaderData(1, ":/img/iconos/clientes.png", "Lista de clientes");
    manageTicketButtons(false);

  });

  QObject::connect(ui->productosPb, &QPushButton::clicked, this, [this](){

    setHeaderData(2, ":/img/iconos/productos.png", "Lista de productos");
    manageTicketButtons(false);

  });

  QObject::connect(ui->serviciosPb, &QPushButton::clicked, this, [this](){

    setHeaderData(3, ":/img/iconos/servicios.png", "Lista de servicios");
    manageTicketButtons(false);

  });

  QObject::connect(ui->conductoresPb, &QPushButton::clicked, this, [this](){

    setHeaderData(4, ":/img/iconos/conductores.png", "Lista de conductores");
    manageTicketButtons(false);

  });

  QObject::connect(ui->vehiculosPb, &QPushButton::clicked, this, [this](){

    setHeaderData(5, ":/img/iconos/vehiculos.png", "Lista de vehículos");
    manageTicketButtons(false);

  });

  QObject::connect(ui->proveedorPb, &QPushButton::clicked, this, [this](){

    setHeaderData(6, ":/img/iconos/proveedores.png", "Lista de proveedores");
    manageTicketButtons(false);

  });


}

void FacturadorMW::instanceComprobanteDialog(SW::DocumentType doc){

  ComprobanteDialog comprobanteDialog(doc ,this);
  comprobanteDialog.exec();

}

