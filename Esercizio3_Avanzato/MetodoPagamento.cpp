//
// Created by Rafid on 25/11/2026.
//

#include "MetodoPagamento.h"

void MetodoPagamento::PagaConCommissione(double importo, double PerCommissione) {

    double commissione=importo+PerCommissione;
    Paga(commissione);
}
