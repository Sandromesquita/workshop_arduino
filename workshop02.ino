#include <Servo.h>

Servo cancela;

int contador = 0;
int led_vermelho = 4;
int led_amarelo = 3;
int led_verde = 2;

void setup() {
  Serial.begin(9600);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  cancela.attach(5);
  cancela.write(0);
}

void loop() {
  //SEMAFORO VERDE
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, HIGH);
  cancela.write(90);
  delay(5000);
  //SEMAFORO AMARELO
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_amarelo, HIGH);
  digitalWrite(led_verde, LOW);
  delay(2000);
  //SEMAFOR VERMELHO
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_amarelo, LOW);
  digitalWrite(led_verde, LOW);
  cancela.write(0);
  delay(7000);
}
