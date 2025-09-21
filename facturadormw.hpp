#pragma once

#include <QMainWindow>

#include "util/helper.hpp"

QT_BEGIN_NAMESPACE
namespace Ui { class FacturadorMW; }
QT_END_NAMESPACE

class FacturadorMW : public QMainWindow
{
  Q_OBJECT

public:
  explicit FacturadorMW(QWidget *parent = nullptr);
  ~FacturadorMW();

private:
  Ui::FacturadorMW *ui;

  void setHeaderData(int index, const QString &icon, const QString &text) const;
  void manageTicketButtons(bool op) const;
  void managePaneles(bool op) const;
  void showPanelByIndex(int index);
  void setUpLeftMenuButtons() const;

  void instanceComprobanteDialog(SW::DocumentType doc);

};
