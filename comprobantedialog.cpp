#include "comprobantedialog.hpp"
#include "ui_comprobantedialog.h"


#include "header.hpp"
#include "notasframe.hpp"

ComprobanteDialog::ComprobanteDialog(SW::DocumentType docType, QWidget *parent)
  : QDialog(parent), ui(new Ui::ComprobanteDialog)
{
  ui->setupUi(this);

  setWindowFlags(windowFlags() | Qt::WindowMaximizeButtonHint);

  loadDataToUnitsCombobox();

  if(docType == SW::FACTURA || docType == SW::BOLETA){
    Header *header = new Header(this);
    ui->headerLayout->addWidget(header);
    (docType == SW::FACTURA) ? setLabelText("Factura") : setLabelText("Boleta");
  }

  if(docType == SW::N_CREDITO || docType == SW::N_DEBITO){
    NotasFrame *frame = new NotasFrame(this);
    ui->headerLayout->addWidget(frame);
    (docType == SW::N_CREDITO) ? setLabelText("N. Crédito") : setLabelText("N. Débito");
    ui->TipoLbl->setText("Motivo:");
    ui->vencimientoDe->setVisible(false);
    ui->vencimientoLbl->setVisible(false);
  }


}

ComprobanteDialog::~ComprobanteDialog()
{
  delete ui;
}

void ComprobanteDialog::setLabelText(const QString text) const{

  const auto labelText =QString("<html><head/><body><p><span style=\" font-weight:700;\">%1 N</span>"
                                 "<span style=\" font-weight:700;\"><sup>o</sup></span>"
                                 "</p><p><br/></p></body></html>").arg(text);
  ui->label->setText(labelText);

}

void ComprobanteDialog::loadDataToUnitsCombobox() const{

  const auto& units = SW::Helper::getUnits();
  for (auto iter = units.cbegin(); iter != units.cend(); ++iter) {

    ui->unidadesCbo->addItem(iter.value(), iter.key());

  }

}
