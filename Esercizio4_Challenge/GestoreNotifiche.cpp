//
// Created by Rafid on 25/11/2026.
//

#include "GestoreNotifiche.h"


void GestoreNotifiche::AggiungiNotifica(Notifica *n) {
    notficheDisponibili.push_back(n);
}

void GestoreNotifiche::inviaATutti(std::string messaggio) {
    for (int i = 0; i < notficheDisponibili.size(); i++) {
        Notifica*n=notficheDisponibili[i];
        n->Invia(messaggio);
    }
}
