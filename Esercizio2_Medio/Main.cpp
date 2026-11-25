#include <vector>

#include "Personaggio.h"

int main() {
    Mago *GrandeMago=new Mago();
    Arciere *PiccoloArciere = new Arciere();
    Guerriero *BruttoGuerriero=new Guerriero();

    std::vector<Personaggio*> personaggi={
        GrandeMago,
        PiccoloArciere,
        BruttoGuerriero
    };

    for (int i=0; i<personaggi.size(); i++) {
        Turno(personaggi[i]);
    }
}

