#pragma once

#include <QFrame>

namespace Ui { class Header; }

class Header : public QFrame
{
  Q_OBJECT

public:
  explicit Header(QWidget *parent = nullptr);
  ~Header();

private:
  Ui::Header *ui;
};
