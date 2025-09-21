#pragma once

#include <QDialog>

#include "util/helper.hpp"

namespace Ui { class VehiculoDialog; }

class VehiculoDialog : public QDialog
{
  Q_OBJECT

public:
  explicit VehiculoDialog(SW::OpenMode openMode, QWidget *parent = nullptr);
  ~VehiculoDialog();

private:
  Ui::VehiculoDialog *ui;
};
