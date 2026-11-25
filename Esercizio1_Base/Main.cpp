
#include "Veicolo.h"
#include <iostream>


int main() {
    Veicolo *v1=new Auto();
    Veicolo *v2=new Bicicletta();
    Veicolo *v3=new Treno();

    v1->Muovi();
    v1->Descrizione();

    v2->Muovi();
    v2->Descrizione();

    v3->Muovi();
    v3->Descrizione();

    delete v1;
    delete v2;
    delete v3;


}
