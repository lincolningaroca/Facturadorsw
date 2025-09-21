#pragma once

#include <QMap>

namespace SW {

enum OpenMode{
  NEW,
  EDIT
};

enum FormMode{
  CLIENT,
  DRIVER,
  PROVIDER
};

enum Services{
  PRODUCT,
  SERVICE
};

enum DocumentType{
  FACTURA,
  BOLETA,
  N_CREDITO,
  N_DEBITO,
  G_REMISION,
  BAJAS
};

struct Helper
{


  explicit Helper() = delete;

  static const QMap<QString, QString>& getUnits() { return units_;}

private:

  inline static const QMap<QString, QString>units_{

    {"4A", "BOBINAS 4A"},
      {"BJ", "BALDE BJ"},
      {"BLL", "BARRILES BLL"},
      {"BG", "BOLSA BG"},
      {"BO", "BOTELLAS BO"},
      {"BX", "CAJAS"},
      {"CT", "CARTONES CT"},
      {"CMK", "CENTIMETRO CUADRADO CMK"},
      {"CMQ", "CENTIMETRO CUBICO CMQ"},
      {"CMT", "CENTIMETRO LINEAL CMT"},
      {"CEN", "CIENTO DE UNIDADES CEN"},
      {"CY", "CILINDRO CY"},
      {"CJ", "CONOS CJ"},
      {"DZN", "DOCENA DZN"},
      {"DZP", "DOCENA POR 10**6 DZP"},
      {"BE", "FARDO BE"},
      {"GLI", "GALON INGLES (4,545956L) GLI"},
      {"GRO", "GRUESA GRO"},
      {"HLT", "HECTOLITRO HLT"},
      {"LEF", "HOJA LEF"},
      {"SET", "JUEGO SET"},
      {"KGM", "KILOGRAMO KGM"},
      {"KTM", "KILOMETRO KTM"},
      {"KWH", "KILOVATIO HORA KWH"},
      {"KT", "KIT KT"},
      {"CA", "LATAS CA"},
      {"LBR", "LIBRAS LBR"},
      {"LTR", "LITRO LTR"},
      {"MWH", "MEGAWATT HORA MWH"},
      {"MTR", "METRO MTR"},
      {"MTK", "METRO CUADRADO MTK"},
      {"MTQ", "METRO CUBICO MTQ"},
      {"MGM", "MILIGRAMOS MGM"},
      {"MLT", "MILILITRO MLT"},
      {"MMT", "MILIMETRO MMT"},
      {"MMK", "MILIMETRO CUADRADO MMK"},
      {"MMQ", "MILIMETRO CUBICO MMQ"},
      {"MIL", "MILLARES MIL"},
      {"UM", "MILLON DE UNIDADES UM"},
      {"ONZ", "ONZAS ONZ"},
      {"PF", "PALETAS PF"},
      {"PK", "PAQUETE PK"},
      {"PR", "PAR PR"},
      {"FOT", "PIES FOT"},
      {"FTK", "PIES CUADRADOS FTK"},
      {"FTQ", "PIES CUBICOS FTQ"},
      {"C62", "PIEZAS C62"},
      {"PG", "PLACAS PG"},
      {"ST", "PLIEGO ST"},
      {"INH", "PULGADAS INH"},
      {"RM", "RESMA RM"},
      {"DR", "TAMBOR DR"},
      {"STN", "TONELADA CORTA STN"},
      {"LTN", "TONELADA LARGA LTN"},
      {"TNE", "TONELADAS TNE"},
      {"TU", "TUBOS TU"},
      {"NIU", "UNIDAD (BIENES) NIU"},
      {"ZZ", "UNIDAD (SERVICIOS) ZZ"},
      {"GLL", "US GALON (3,7843 L) GLL"},
      {"YRD", "YARDA YRD"},
      {"YDK", "YARDA CUADRADA YDK"},

      };

};


} // namespace SW
