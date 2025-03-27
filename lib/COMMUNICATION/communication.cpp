#include <Arduino.h>
#include "communication.h"

void initialiserLiaisonSerie(unsigned int vitesse)
{
  Serial.begin(vitesse);
}

void attendre(u_long delais)
{
  
  delay(delais);
  
}

HardwareSerial mySerial(2); UART2

void transmission(int Pin_RX, int Pin_TX, int vitesseTransmissionReduite)
{
  mySerial.begin(vitesseTransmissionReduite, SERIAL_8N1, Pin_RX, Pin_TX);
}

void afficherTrame()
{
  if (mySerial.available())
  {
    String trame = mySerial.readStringUntil('\n');
    String contenu = trame.substring(2, trame.length() - 3);
    Serial.println("Trame reçu : " + contenu);
  }
}