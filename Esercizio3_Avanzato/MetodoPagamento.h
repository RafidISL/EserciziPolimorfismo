//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_METODOPAGAMENTO_H
#define ESERCIZIPOLIMORFISMO_METODOPAGAMENTO_H


class MetodoPagamento {
public:
    void virtual Paga(double importo)=0;
    void PagaConCommissione(double importo, double PerCommissione);
};


#endif //ESERCIZIPOLIMORFISMO_METODOPAGAMENTO_H
