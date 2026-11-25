//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_PERSONAGGIO_H
#define ESERCIZIPOLIMORFISMO_PERSONAGGIO_H


class Personaggio {
public:
    virtual void Attacca()=0;
    virtual void Presentati()=0;
    ~Personaggio();
};

class Guerriero:public Personaggio {
    public:
    void Attacca() override;
    void Presentati() override;
};

class Mago:public Personaggio {
    public:
    void Attacca() override;
    void Presentati() override;
};

class Arciere:public Personaggio {
public:
    void Attacca() override;
    void Presentati() override;
};

void Turno (Personaggio *p);


#endif //ESERCIZIPOLIMORFISMO_PERSONAGGIO_H
