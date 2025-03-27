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
#include "communication.h"
#define RECEPTION
//////////////////////////////////////////////////////////////////////
#define pinTx 17
#define pinRx 16
//////////////////////////////////////////////////////////////////////
void setup() 
{
  initialiserLiaisonSerie();
  transmission(pinRx, pinTx);
}
//////////////////////////////////////////////////////////////////////
#ifdef RECEPTION
void loop() 
{
  afficherTrame();
}
#else
void loop() 
{
  void envoyerTram(String SERRE_ID, String TRAME_NUM, String TEMPERATURE, String HUMIDITE)
}
#endif