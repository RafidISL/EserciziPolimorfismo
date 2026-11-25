using namespace std;
#include <stdio.h>
#include <iostream>

#include "Personaggio.h"

void Mago::Attacca() {
    cout<<"Il mago lancia le pozioni"<<endl;
}

void Mago::Presentati() {
    cout<<"Ciao sono un mago"<<endl;

}

void Guerriero::Attacca() {
    cout<<"Il Guerriero usa la sua spada"<<endl;

}

void Guerriero::Presentati() {
    cout<<"Ciao sono un guerriero"<<endl;

}

void Arciere::Attacca() {
    cout<<"L'arciere scaglia le sue frecce"<<endl;

}

void Arciere::Presentati() {
    cout<<"Ciao sono un arciere"<<endl;

}

void Turno(Personaggio *p) {
    p->Presentati();
    p->Attacca();
}
