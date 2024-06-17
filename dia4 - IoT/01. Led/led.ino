const int pinLed = 13;
int delayTime = 500;

void setup() {
  // put your setup code here, to run once:

  // Establecer el pin '13' como salida (OUTPUT)

  pinMode(pinLed, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  // Escritura digital, enviar valor prendido

  // digitalWrite(13, HIGH);

  // Tiempo de espera, en milisegundos

  // delay(500);
  // digitalWrite(13, LOW);
  // delay(500);

  digitalWrite(13, HIGH);
  delay(delayTime);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(900);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(900);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(450);

  digitalWrite(13, HIGH);
  delay(100);
  digitalWrite(13, LOW);
  delay(650);
  digitalWrite(13, HIGH);
  delay(75);
  digitalWrite(13, LOW);
  delay(10000);

}
