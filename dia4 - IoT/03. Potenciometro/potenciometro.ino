// Definir los pines 

int pinPot = A5;

void setup() {

  pinMode(pinPot, INPUT);
  Serial.begin(9600);

}

void loop() {

  int lecturaPot = analogRead(pinPot);
  float voltaje = lecturaPot * 5.0 / 1023.0;
  int salida = voltaje * 255 / 5;

  Serial.println("El valor del voltaje es ");
  Serial.println(voltaje);
  delay(1000);

}