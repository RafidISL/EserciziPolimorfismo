//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_CONTANTI_H
#define ESERCIZIPOLIMORFISMO_CONTANTI_H
#include "MetodoPagamento.h"


class Contanti:public MetodoPagamento {
    void Paga(double importo)override;
};


#endif //ESERCIZIPOLIMORFISMO_CONTANTI_H
