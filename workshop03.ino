#include <Servo.h>

Servo cancela;

int contador = 0;
int led_vermelho = 4;
int led_amarelo = 3;
int led_verde = 2;

int pot = A0;
int valor_pot;

void setup() {
  Serial.begin(9600);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  cancela.attach(5);
  cancela.write(0);
}

void loop() {
  valor_pot = analogRead(pot);
  Serial.println("Valor do potenciometro: " + String(valor_pot));
  int angulo = map(valor_pot, 0, 1023, 0, 180);
  Serial.println("Valor do angulo: " + String(angulo));
  cancela.write(angulo);
  if(angulo>120){
    digitalWrite(led_vermelho, HIGH);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, LOW);
  }
  else if(angulo>60){
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, HIGH);
    digitalWrite(led_verde, LOW);
  }
  else{
    digitalWrite(led_vermelho, LOW);
    digitalWrite(led_amarelo, LOW);
    digitalWrite(led_verde, HIGH);
  }

  
}
