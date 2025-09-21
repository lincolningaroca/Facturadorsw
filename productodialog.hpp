#pragma once

#include <QDialog>

#include "util/helper.hpp"

namespace Ui { class ProductoDialog; }

class ProductoDialog : public QDialog
{
  Q_OBJECT

public:
  explicit ProductoDialog(SW::OpenMode openMode, SW::Services services, QWidget *parent = nullptr);
  ~ProductoDialog();

private:
  Ui::ProductoDialog *ui;

  void setDataToUpdate();
};
