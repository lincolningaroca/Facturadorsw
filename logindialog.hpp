#pragma once

#include <QDialog>

namespace Ui { class LogInDialog; }

class LogInDialog : public QDialog
{
  Q_OBJECT

public:
  explicit LogInDialog(QWidget *parent = nullptr);
  ~LogInDialog();

private:
  Ui::LogInDialog *ui;
};
