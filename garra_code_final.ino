//A porta digital 10 movimenta a base para direita e esquerda.
//A porta digital 11 movimenta o braço para cima e para baixo.
//A porta digital 12 abre e fecha a garra.
//A porta digital 13 movimenta o braço para frente e para trás.

#include <Servo.h>

Servo ServoBase, ServoGarra, ServoEsquerdo, ServoDireito;

int x;

void setup()
{
  ServoBase.attach(10);  //girar para direita e esquerda
  ServoEsquerdo.attach(11); //abaixar e para cima
  ServoDireito.attach(13);  //para frente e para trás
  ServoGarra.attach(12);  //abre garra e fecha garra 
  
}
void loop()
{
  delay(2000);
  
  // Início
  
  // Girar para direita
    for (x = 170; x > 10; x--) {
    ServoBase.write(x);
    delay(20);
         
  }
  delay(1000);

  // Pegar objeto

  // Abaixar
  for (x = 70; x > 10; x--) {
    ServoEsquerdo.write(x);
    delay(20);
  }
  delay(1000);

  // Abre garra
  for (x = 125; x > 90; x--) {
    ServoGarra.write(x);
    delay(20);
  }
  delay(1000);

  // Para frente
  for (x = 40; x < 100; x++) {
    ServoDireito.write(x);
    delay(20);
  }
  delay(1000);

  // Fecha garra
  for (x = 90; x < 125; x++) {
    ServoGarra.write(x);
    delay(20);
  }
  delay(1000);

  // Para trás
  for (x = 100; x > 40; x--) {
    ServoDireito.write(x);
    delay(20);
  }
  delay(1000);

  // Para cima
  for (x = 10; x < 70; x++) {
    ServoEsquerdo.write(x);
    delay(20);
  }
  delay(1000);

  //Levar objeto

  //  Girar para esquerda
  for (x = 10; x < 170; x++) {
    ServoBase.write(x);
    delay(20);
  }
  delay(1000);

  // Abaixar
  for (x = 70; x > 10; x--) {
    ServoEsquerdo.write(x);
    delay(20);
  }
  delay(1000);

  // Para frente
  for (x = 40; x < 100; x++) {
    ServoDireito.write(x);
    delay(20);
  }
  delay(1000);

  // Abre garra
  for (x = 125; x > 90; x--) {
    ServoGarra.write(x);
    delay(20);
  }
  delay(1000);

  // Para tras
  for (x = 100; x > 40; x--) {
    ServoDireito.write(x);
    delay(20);
  }
  delay(1000);

  // Fecha garra
  for (x = 90; x < 125; x++) {
    ServoGarra.write(x);
    delay(20);
  }
  delay(1000);

  // Para cima
  for (x = 10; x < 70; x++) {
    ServoEsquerdo.write(x);
    delay(20);
  }
  delay(1000);

}
