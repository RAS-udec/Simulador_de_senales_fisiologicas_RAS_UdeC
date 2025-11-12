/*
En este archivo se guardan algunas funciones creadas. Se separan del codigo principal por simple estetica y
para facilitar la lectura del código.
*/

/*
La función pulso transforma valores entre 0 y 1023 a valores que se asemejan al pulso, 
entre 0 y FCM.
*/
long Pulso(long valor, long fcm){
  long ppm = ((valor) * (fcm))/1023;
  return ppm;
}

void beep(int caso, int ppm) {
  if (ppm < 30) ppm = 30;  // evita división por 0 o pausas enormes
  int pausa;

  switch (caso) {
    case 1: // Línea plana
      tone(BUZZER, 1000);
      break;

    case 2: // Rango normal (80-100 aprox)
      pausa = 60000 / ppm;  // 60.000 ms por minuto
      tone(BUZZER, 800, 100);
      delay(pausa+500);
      break;

    case 3: // Bajo ritmo
      pausa = 1000;
      tone(BUZZER, 800, 100);
      delay(pausa);
      break;

    case 4: // Taquicardia o máxima
      pausa = 6000 / ppm;   // pitidos más rápidos
      tone(BUZZER, 800, 100);
      delay(pausa);
      break;
  }
}

void leds(int caso){
  switch(caso){
    case 1: //La LED roja se enciende y la verde se apaga
      digitalWrite(LED_ROJO, HIGH);
      digitalWrite(LED_VERDE, LOW);
      break;
    case 2: //La LED verde se apaga mientras que la roja parpadea en intervalos
      digitalWrite(LED_VERDE, LOW);
      digitalWrite(LED_ROJO, HIGH);
      delay(500);
      digitalWrite(LED_ROJO, LOW);
      delay(200);
      break;
    case 3: //La LED verde se enciende y la roja se apaga
      digitalWrite(LED_ROJO, LOW);
      digitalWrite(LED_VERDE, HIGH);
      break;
  }
}
