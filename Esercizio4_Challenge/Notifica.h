//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_NOTIFICA_H
#define ESERCIZIPOLIMORFISMO_NOTIFICA_H
#include <string>


class Notifica {
public:
    void virtual  Invia(std::string messaggio)=0;
    virtual ~Notifica();
};

class NotificaEmail:public Notifica {
    public:
    void Invia(std::string messaggio)override;
};

class NotificaSMS:public Notifica {
public:
    void Invia(std::string messaggio)override;
};

class NotificaPush:public Notifica {
public:
    void Invia(std::string messaggio)override;

};




#endif //ESERCIZIPOLIMORFISMO_NOTIFICA_H
