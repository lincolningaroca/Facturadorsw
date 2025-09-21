#pragma once

#include <QDialog>

#include "util/helper.hpp"

namespace Ui { class ComprobanteDialog; }

class ComprobanteDialog : public QDialog
{
  Q_OBJECT

public:
  explicit ComprobanteDialog(SW::DocumentType docType, QWidget *parent = nullptr);
  ~ComprobanteDialog();

private:
  Ui::ComprobanteDialog *ui;

  void setLabelText(const QString text) const;
  void loadDataToUnitsCombobox() const;
};
