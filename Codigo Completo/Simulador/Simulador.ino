/*
Arduino en Acción: Simulador de señales Fisiológicas
Sociedad de Robótica y Automatización IEEE UdeC

En este archivo encontraran el código completo del taller, con todo lo necesario para hacer el simulador. 
Pueden usarlo para estudiar las bases de la programación en C++ o para guiarse y completar tu propio codigo.
Este es el archivo principal con el setup y el loop, en los otros podrás encontrar las variables previamente definidad, 
además de funciones para facilitar el entendimiento del código. 
NOTA: Se puede hacer todo el codigo en un mismo archivo, se separo en distintos para facilitar la comprención del lector. 
*/

#include "Variables.h" //Permite usar las cosas definidas en el otro archivo.
int valor = 0;

/*
La función setup() solo se ejecuta una vez, al inicio de la ejecución del código.
*/
void setup() {
  pinMode(ledRojo, OUTPUT);   //Se cataloga los pines digitales como entradas (INPUT) o salidas (OUTPUT), 
  pinMode(ledVerde, OUTPUT);  //Como los LEDs y el Buzzer solo deben recivir valores, se les cataloga como salidaas.
  pinMode(buzzer, OUTPUT);
  Serial.begin(9600);  //Se inicia comunicación con el Monitor Serial, con este podremos los valores que le enviemos.
}
/*
La función loop() se ejecuta continuamente, tras que setup termine.
*/
void loop() {
  //La variable valor, recive los valores del potenciometro (entre 0 y 1023). 
  valor = analogRead(pot);
  int ppm = Pulso(valor, FCM);
  serial.print(ppm);

  if(ppm==0){//caso 1
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }
  else if(ppm>0 && ppm<80){ //caso 2
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, LOW);
    delay(300);
  }
  else if(ppm>=80 && ppm<=100){ //caso 3
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledVerde, HIGH);
  }
  else if(ppm>100 && ppm<FCM){ //caso 4
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledRojo, LOW);
    delay(30);

  }
  else if(pulso==FCM){ //caso 5
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
  }
}

