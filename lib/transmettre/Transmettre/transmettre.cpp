#include "transmettre.h"
#include <arduino.h>
#include <String.h>

///////////////////////////////////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse)
{
  Serial.begin(vitesse);
}

void envoyerTrame()
{ 
}

String construireTrame()
{
}

void attendre(unsigned int delais)
{
  delay(delais);
}
