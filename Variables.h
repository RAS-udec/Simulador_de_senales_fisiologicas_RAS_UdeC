/*
Para empezar, se debe guardar en variables donde especifiques en cual pin esta cada sensor, actuador o periferico.
Usaremos '#define' para definir cada una. En caso de que conectes en otro pin las cosas, solo hay que cambiar 
los valores asignados en este archivo o donde las hayas definido.
*/
#define pot A0 //Definimos el pin Analógico como el potenciometro.
#define ledRojo 11 //Se designa al pin digital 11 como el led Rojo.
#define ledVerde 12 //Se designa al pin 12 como el led Verde.
#define buzzer 10 //Se designa al pin 10 como el Buzzer.
#define FCM long(220) //Esta variable guarda el valor de la Frecuencia cardiaca máxima. Esta puede variar (FCM=220-edad), se usa 220 ppm como ejemplo.
