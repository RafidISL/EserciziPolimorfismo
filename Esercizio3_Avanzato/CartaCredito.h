//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_CARTACREDITO_H
#define ESERCIZIPOLIMORFISMO_CARTACREDITO_H
#include "MetodoPagamento.h"


class CartaCredito:public MetodoPagamento {
public:
    void Paga(double importo) override;
};


#endif //ESERCIZIPOLIMORFISMO_CARTACREDITO_H
