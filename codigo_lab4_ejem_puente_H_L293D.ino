void setup()
{
  pinMode(8, OUTPUT); // se define el pin 8 como salida
  pinMode(9, OUTPUT); // se define el pin 8 como salida
  pinMode(13,OUTPUT); // se define el pin 8 como salida
}

void CambiaLed(){                     //esta funcion apaga o prende el led correspondiente al pin 13 segun su estado (lo prende si esta apagado o
  digitalWrite(13,!digitalRead(13));  // lo apaga si esta encendido) cada vez que es llamada.
}

void loop()
{
  digitalWrite(9, HIGH);   // con la linea 14 y 15 se hace que el motor
  digitalWrite(8, LOW);   // gire hacia la izquierda
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(9, HIGH);   //con la linea 17 y 18
  digitalWrite(8, HIGH);   //se produce una detencion rapida
  delay(500); // Espera 1 segundo (1000 milisegundos)
  digitalWrite(8, HIGH);   //con la linea 20 y 21 se gira el motor
  digitalWrite(9, LOW);   // hacia la derecha
  delay(1000); // Espera 1 segundo (1000 milisegundos)
  CambiaLed();   // se llama a la funcion cambiaLed()
}
