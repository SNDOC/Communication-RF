#ifndef _TRANSMETTRE_H__
#define __TRANSMETTRE_H__

//////////////////////////////////////////////////
#include <arduino.h>
#include <String.h>
//////////////////////////////////////////////////
#define VITESSE_TRANSMISSION 9600
//////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse = VITESSE_TRANSMISSION);

void envoyerTrame();

string construireTrame ();

void attendre(unsigned int delais);

#endif
