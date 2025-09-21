#include "notasframe.hpp"
#include "ui_notasframe.h"

NotasFrame::NotasFrame(QWidget *parent)
  : QFrame(parent), ui(new Ui::NotasFrame)
{
  ui->setupUi(this);
}

NotasFrame::~NotasFrame()
{
  delete ui;
}
