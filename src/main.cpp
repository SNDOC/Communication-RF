/**     // TO DO
 * @file main.cpp
 * @author Antoine Brousse
 * @brief 
 * @version 0.1
 * @date 27/03/2025
 * 
 * @copyright Copyright (c) 2024
 * 
 */
//////////////////////////////////////////////////////////////////////
#include <Arduino.h>
#include "controleLed.h"

uint8_t etatBouton = 0;
uint8_t nombreAppui = 0;

//////////////////////////////////////////////////////////////////////
void setup() 
{
  initialiserBroches();
  allumerLed();
}
//////////////////////////////////////////////////////////////////////
void loop() 
{
  etatBouton = lireEtatBouton();
  if (etatBouton == BAS)
  {
	  eteindreLed (nombreAppui);
	  allumerLed (nombreAppui + 1);
	  if (nombreAppui > NOMBRES_APPUI)
	  {
		  nombreAppui = 0;
	  }
  }
}