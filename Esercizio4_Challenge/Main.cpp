#include "GestoreNotifiche.h"
#include "Notifica.h"
//
// Created by Rafid on 25/11/2026.
//
int main() {

    Notifica* Sms_1=new NotificaSMS();
    Notifica* Email_1=new NotificaEmail();
    Notifica* Push_1=new NotificaPush();

    GestoreNotifiche* gestore = new GestoreNotifiche();

    gestore->AggiungiNotifica(Sms_1);
    gestore->AggiungiNotifica(Email_1);
    gestore->AggiungiNotifica(Push_1);

    gestore->inviaATutti("Attenzione devi consegnare il progetto AnimeStream entro domani ");

}