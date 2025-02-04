#ifndef _TRANSMETTRE_H__
#define __TRANSMETTRE_H__

//////////////////////////////////////////////////
#include <arduino.h>
#include <String.h>
//////////////////////////////////////////////////
#define VITESSE_TRANSMISSION 9600
//////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse = VITESSE_TRANSMISSION);

void envoyerTrame(String trame);

string construireTrame (u_int16_t valeurADC, u_int8_t anglePotentiometre, u_int8_t variationPotentiometre, u_int32_t valeurADCenMilivolts);

void attendre(unsigned int delais);

#endif
