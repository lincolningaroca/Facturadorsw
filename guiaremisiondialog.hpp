#pragma once

#include <QDialog>

namespace Ui { class GuiaRemisionDialog; }

class GuiaRemisionDialog : public QDialog
{
  Q_OBJECT

public:
  explicit GuiaRemisionDialog(QWidget *parent = nullptr);
  ~GuiaRemisionDialog();

private:
  Ui::GuiaRemisionDialog *ui;

  void loadDataToUnitCombobox() const;

};
