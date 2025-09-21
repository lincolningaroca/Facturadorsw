#include "vehiculodialog.hpp"
#include "ui_vehiculodialog.h"

#include <QPushButton>

VehiculoDialog::VehiculoDialog(SW::OpenMode openMode, QWidget *parent)
  : QDialog(parent), ui(new Ui::VehiculoDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
  ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Registrar");
  ui->buttonBox->button(QDialogButtonBox::Cancel)->setText("Cancelar");

  if(openMode == SW::NEW)

  setWindowTitle("Nuevo vehículo");
  else{
    setWindowTitle("Actualizar datos");
    ui->buttonBox->button(QDialogButtonBox::Ok)->setText("Actualizar");
  }
}

VehiculoDialog::~VehiculoDialog()
{
  delete ui;
}
