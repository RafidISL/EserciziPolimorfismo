//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_PAYPAL_H
#define ESERCIZIPOLIMORFISMO_PAYPAL_H
#include "MetodoPagamento.h"


class PayPal: public MetodoPagamento {
    public:
    void Paga(double importo) override;
};


#endif //ESERCIZIPOLIMORFISMO_PAYPAL_H
