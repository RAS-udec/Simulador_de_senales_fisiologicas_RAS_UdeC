/*
Para empezar, se debe guardar en variables donde especifiques en cual pin esta cada sensor, actuador o periferico.
Usaremos '#define' para definir cada una. En caso de que conectes en otro pin las cosas, solo hay que cambiar 
los valores asignados en este archivo o donde las hayas definido.
*/
#define POTENCIOMETRO A0 //Definimos el pin Analógico como el potenciometro.
#define LED_ROJO 11 //Se designa al pin digital 11 como el led Rojo.
#define LED_VERDE 12 //Se designa al pin 12 como el led Verde.
#define BUZZER 10 //Se designa al pin 10 como el Buzzer.
#define FCM long(220) //Esta variable guarda el valor de la Frecuencia cardiaca máxima. Esta puede variar (FCM=220-edad), se usa 220 ppm como ejemplo.
/*Especificación: La frecuencia Cardiaca Máxima es una variable entera (int), pero se me agrega el termino "long" porque, al 
multiplicarse con el valor entregado por el potenciometro, el valor devuelto excede el valor maximo que puede tomar un int (de 4 bits)*/
