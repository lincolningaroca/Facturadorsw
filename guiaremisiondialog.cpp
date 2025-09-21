#include "guiaremisiondialog.hpp"
#include "ui_guiaremisiondialog.h"

#include "util/helper.hpp"

GuiaRemisionDialog::GuiaRemisionDialog(QWidget *parent)
  : QDialog(parent), ui(new Ui::GuiaRemisionDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);
  loadDataToUnitCombobox();

}

GuiaRemisionDialog::~GuiaRemisionDialog()
{
  delete ui;
}

void GuiaRemisionDialog::loadDataToUnitCombobox() const{

  const auto& units = SW::Helper::getUnits();

  for (auto it = units.cbegin(); it != units.cend(); ++it) {

    ui->unitsCbo->addItem(it.value(), it.key());

  }

}
