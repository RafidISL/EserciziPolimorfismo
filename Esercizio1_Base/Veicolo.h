//
// Created by Rafid on 25/11/2026.
//

#ifndef ESERCIZIPOLIMORFISMO_VEICOLO_H
#define ESERCIZIPOLIMORFISMO_VEICOLO_H


class Veicolo {
public:
    virtual void Muovi()=0;
    virtual void Descrizione()=0;
    virtual ~Veicolo(){};
};

class Auto: public Veicolo {
    public:
    void Muovi() override;
    void Descrizione() override;
};

class Bicicletta : public Veicolo {
public:
    void Muovi() override;
    void Descrizione() override;
};

class Treno : public Veicolo {
public:
    void Muovi() override;
    void Descrizione() override;
};



#endif //ESERCIZIPOLIMORFISMO_VEICOLO_H
