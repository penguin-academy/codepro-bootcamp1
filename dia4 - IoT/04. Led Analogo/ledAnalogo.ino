// Definir los pines de los LED

int ledRojo = 11;

// Entrada analoga del potencimetro

int pinPot = A5;

// Definimos un tiempo de delay, en milisegundos

int delayTime = 3000;

void setup() {

  pinMode(ledRojo, OUTPUT);
  pinMode(pinPot, INPUT);
  Serial.begin(9600);

}

void loop() {

  int lecturaPot = analogRead(pinPot);
  float voltaje = lecturaPot * 5.0 / 1023.0;
  int salida = voltaje * 255 / 5;

  analogWrite(ledRojo, salida);
  Serial.println(salida);

  // Serial.println("El valor del voltaje es ");
  // Serial.println(voltaje);
  // delay(1000);

}