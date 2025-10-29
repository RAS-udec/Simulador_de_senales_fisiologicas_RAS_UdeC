int ledRojo = 11;
int ledVerde = 12;
int buzzer = 10;
int pot = A0;

unsigned int FCM = 220; //el 25 hace referencia a 25 años, cada quien puede cambiarlo a su gusto. La estructura del codigo no deberia verse afectada. 

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // Leer valor del potenciómetro
  int valor = analogRead(pot);
  Serial.println(valor);

  if(valor == 0 || valor == 1023){
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
    tone(buzzer, 1000);

  }
  else if (valor>=60 && valor<=100){
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
    tone(buzzer, 1000);
  }
  else{
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, LOW);
    tone(buzzer, 1000, 100);
    delay(500);
  }

}

