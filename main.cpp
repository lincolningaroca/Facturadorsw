#include "facturadormw.hpp"
// #include "logindialog.hpp"

#include <QApplication>
#include <QStyleFactory>

int main(int argc, char *argv[])
{
  QApplication a(argc, argv);

  a.setOrganizationName("SWSystem's");
  a.setApplicationName("FacturadorSW");
  a.setApplicationVersion("1.0");

  a.setStyle(QStyleFactory::create("Fusion"));
  FacturadorMW w;
  w.show();

  // LogInDialog logIn;
  // logIn.exec();
  return a.exec();
}
