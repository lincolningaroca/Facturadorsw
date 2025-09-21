#include "clientedialog.hpp"
#include "ui_clientedialog.h"

// #include "ty

ClienteDialog::ClienteDialog(SW::OpenMode openMode, SW::FormMode formMode, QWidget *parent)
  : QDialog(parent), ui(new Ui::ClienteDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);

  ui->documentoCbo->addItem("DNI");
  ui->documentoCbo->addItem("RUC");
  ui->documentoCbo->addItem("Carnet de extranjeria");
  ui->documentoCbo->addItem("Pasaporte");

  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Registrar");
  ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancelar");

  switch (formMode) {
    case SW::CLIENT:{

        changeToClientMode();

        if(openMode == SW::NEW){

          setWindowTitle("Nuevo cliente");

        }else{

          setDataToUpdate();
        }
        break;
      }
    case SW::DRIVER:
      if(openMode == SW::NEW){

        setWindowTitle("Nuevo conductor");

      }else{
        setDataToUpdate();
      }
      break;
    case SW::PROVIDER:

      changeToClientMode();
      if(openMode == SW::NEW){

        setWindowTitle("Nuevo Proveedor");

      }else{
        setDataToUpdate();

      }
      break;

    default:
      break;
  }

}

ClienteDialog::~ClienteDialog()
{
  delete ui;
}

void ClienteDialog::changeLabelText() const{

  ui->label_3->setText("Nombre:");
  ui->label_4->setText("Licencia:");
  ui->label_5->setText("Estado:");

}

void ClienteDialog::changeToClientMode(){

  auto height = (this->geometry().height()-ui->estadoCbo->geometry().height());
  resize(this->geometry().width(), height);

  ui->label_5->setVisible(false);
  ui->estadoCbo->setVisible(false);

}

void ClienteDialog::setDataToUpdate(){

  setWindowTitle("Actualizar datos");
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Actualizar");

}
