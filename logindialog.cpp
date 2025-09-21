#include "logindialog.hpp"
#include "ui_logindialog.h"

LogInDialog::LogInDialog(QWidget *parent)
  : QDialog(parent), ui(new Ui::LogInDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::MSWindowsFixedSizeDialogHint);

  ui->label_2->setBuddy(ui->usuarioTxt);
  ui->label_3->setBuddy(ui->passwordTxt);
  ui->passwordTxt->setEchoMode(QLineEdit::Password);

  ui->usuarioTxt->setFocus(Qt::OtherFocusReason);

  // QObject::connect(ui->ingresarPb, &QPushButton::clicked, this, [this](){

  //   qInfo() << "Usuario: " << ui->usuarioTxt->text() << "\n Password: " << ui->passwordTxt->text();;

  // });

}

LogInDialog::~LogInDialog()
{
  delete ui;
}
