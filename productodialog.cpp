#include "productodialog.hpp"
#include "ui_productodialog.h"

#include <QPushButton>

ProductoDialog::ProductoDialog(SW::OpenMode openMode, SW::Services services, QWidget *parent)
  : QDialog(parent), ui(new Ui::ProductoDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);

  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Registrar");
  ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancelar");

  switch (services) {
    case SW::PRODUCT:
      if(openMode == SW::NEW){
        setWindowTitle("Nuevo Producto");
      }else{
        setDataToUpdate();
      }
      break;
    case SW::SERVICE:
      if(openMode == SW::NEW){
        setWindowTitle("Nuevo Servicio");
      }else{
        setDataToUpdate();
      }
      break;

    default:
      break;
  }


}

ProductoDialog::~ProductoDialog()
{
  delete ui;
}

void ProductoDialog::setDataToUpdate(){

  setWindowTitle("Actualizar datos");
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Actualizar");

}
