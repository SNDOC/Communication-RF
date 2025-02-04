#include "transmettre.h"
#include <arduino.h>
#include <String.h>

///////////////////////////////////////////////////////////////////////////////

void initialiserLiaisonSerie(unsigned int vitesse)
{
  Serial.begin(vitesse);
}

void envoyerTrame(String trame)
{ 
  Serial.print(trame);
}

String construireTrame(u_int16_t valeurADC, u_int8_t anglePotentiometre, u_int8_t variationPotentiometre, u_int32_t valeurADCenMilivolts)
{
String trame = "Position : " + anglePotentiometre + "\n" + "Variation : " + variationPotentiometre + "%" + "\n" + "Tension : " + valeurADCenMilivolts + + "mV" + "\n" +  "ADC : " + valeurADC + "\n" ;
}

void attendre(unsigned int delais)
{
  delay(delais);
}
