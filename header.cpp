#include "header.hpp"
#include "ui_header.h"

Header::Header(QWidget *parent)
  : QFrame(parent)
  , ui(new Ui::Header)
{
  ui->setupUi(this);
}

Header::~Header()
{
  delete ui;
}
