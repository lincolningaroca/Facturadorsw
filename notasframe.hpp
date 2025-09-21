#pragma once

#include <QFrame>

namespace Ui { class NotasFrame; }

class NotasFrame : public QFrame
{
  Q_OBJECT

public:
  explicit NotasFrame(QWidget *parent = nullptr);
  ~NotasFrame();

private:
  Ui::NotasFrame *ui;
};
