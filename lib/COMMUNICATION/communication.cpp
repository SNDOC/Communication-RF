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

HardwareSerial mySerial(2); //UART2

void transmission(int pinRx, int pinTx, int vitesseTransmissionReduite)
{
  mySerial.begin(vitesseTransmissionReduite, SERIAL_8N1, pinRx, pinTx);
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

void envoyerTram(String SERRE_ID, String TRAME_NUM, String TEMPERATURE, String HUMIDITE)
{

  String data = "SERRE;" + String (SERRE_ID) + ";" + String (TRAME_NUM) + ";" + String (TEMPERATURE) + ";C;" + String (HUMIDITE) + ";%";
  String trame = "\x02" + data + "\x03\r\n";  // Trame

  mySerial.print(trame);  // Envoi via UART
  Serial.println("Trame envoyée : " + trame); 

  delay(1000);

}