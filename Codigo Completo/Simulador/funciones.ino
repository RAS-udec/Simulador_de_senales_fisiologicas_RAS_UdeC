/*
En este archivo se guardan algunas funciones creadas. Se separan del codigo principal por simple estetica y
para facilitar la lectura del código.
*/

/*
La función pulso transforma valores entre 0 y 1023 a valores que se asemejan al pulso, 
entre 0 y FCM.
*/
int Pulso(int valor, int fcm){
  int ppm = (valor * fcm)/1023;
  return ppm;
}

void beep(int caso){
  if(caso==1){
    tone(buzzer,1000);
  }
  else if(caso == 2){
    tone(buzzer, 1500, 250);
    delay(200);
    tone(buzzer, 1500, 250);
    delay(200);
  }
  else if(caso == 3){

  }
  else if(caso == 4){

  }
  else if(caso == 5){

  }
}

