//
// Created by Rafid on 25/11/2026.
//
#include <stdio.h>
#include "Veicolo.h"

#include <iostream>
#include <ostream>

class Veicolo {
    public:
    void virtual Muovi()=0;
    void virtual Descrizione()=0;
};

class Auto:public Veicolo {
    public:
    void Muovi()override{cout << "L'auto si si sta muovendo" << endl;}
    void Descrizione()override{cout << "Il veicolo è un auto" << endl;}
};


class Bicicletta:public Veicolo {
public:
    void Muovi()override{cout << "La bicicletta si si sta muovendo" << endl;}
    void Descrizione()override{cout << "Il veicolo è una bici" << endl;}
};


class Treno:public Veicolo {
public:
    void Muovi()override{cout << "Il treno si si sta muovendo" << endl;}
    void Descrizione()override{cout << "Il veicolo è un Treno" << endl;}
};
