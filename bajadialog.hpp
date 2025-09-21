#pragma once

#include <QDialog>

namespace Ui { class BajaDialog; }

class BajaDialog : public QDialog
{
  Q_OBJECT

public:
  explicit BajaDialog(QWidget *parent = nullptr);
  ~BajaDialog();

private:
  Ui::BajaDialog *ui;
};
