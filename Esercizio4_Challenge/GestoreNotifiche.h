//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_GESTORENOTIFICHE_H
#define ESERCIZIPOLIMORFISMO_GESTORENOTIFICHE_H
#include <vector>
#include "Notifica.h";


class GestoreNotifiche {
    private:
    std::vector<Notifica*> notficheDisponibili;
    public:
    void AggiungiNotifica(Notifica* n);
    void inviaATutti (std::string messaggio);
};


#endif //ESERCIZIPOLIMORFISMO_GESTORENOTIFICHE_H
