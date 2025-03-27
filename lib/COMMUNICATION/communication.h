#ifndef COMMUNICATION_H
#define COMMUNICATION_H

#include <Arduino.h>

#define VITESSE_DE_TRANSMISSION 9600
#define VITESSE_DE_TRANSMISSION_REDUITE 200


void initialiserLiaisonSerie(unsigned int vitesse = VITESSE_DE_TRANSMISSION);
void transmission(int pinRx, int pinTx, int vitesseTransmissionReduite = VITESSE_DE_TRANSMISSION_REDUITE);
void afficherTrame();
void envoyerTram(String SERRE_ID, String TRAME_NUM, String TEMPERATURE, String HUMIDITE);
void attendre();

#endif