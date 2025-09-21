#include "bajadialog.hpp"
#include "ui_bajadialog.h"

BajaDialog::BajaDialog(QWidget *parent)
  : QDialog(parent), ui(new Ui::BajaDialog)
{
  ui->setupUi(this);
  setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);
}

BajaDialog::~BajaDialog()
{
  delete ui;
}
