//
// Created by Rafid on 25/11/2026.
//

#include "Notifica.h"
#include <iostream>
#include <ostream>

void NotificaSMS::Invia(std::string messaggio) {
    std::cout<<"Hai un nuovo sms: "<<messaggio<<std::endl;
}

void NotificaPush::Invia(std::string messaggio) {
    std::cout<<"Hai una notfica push : "<<messaggio<<std::endl;
}

void NotificaEmail::Invia(std::string messaggio) {
    std::cout<<"Hai una nuova Email : "<<messaggio<<std::endl;
}

Notifica::~Notifica() = default;