#pragma once

#include <QDialog>

#include "util/helper.hpp"

namespace Ui { class ClienteDialog; }

class ClienteDialog : public QDialog
{
  Q_OBJECT

public:

  explicit ClienteDialog(SW::OpenMode openMode, SW::FormMode formMode, QWidget *parent = nullptr);
  ~ClienteDialog();



private:
  Ui::ClienteDialog *ui;

  void changeLabelText() const;
  void changeToClientMode();
  void setDataToUpdate();

};
