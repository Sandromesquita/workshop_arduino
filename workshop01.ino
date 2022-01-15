int contador = 0;
int led_vermelho = 4;
int led_amarelo = 3;
int led_verde = 2;

void setup() {
  Serial.begin(9600);
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
}

void loop() {
  contador = contador + 1;
  Serial.print("Contagem: ");  
  Serial.println(contador);
  digitalWrite(led_vermelho, HIGH);
  delay(500);
  digitalWrite(led_vermelho, LOW);
  delay(500);
}
