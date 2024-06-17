#include <DHT.h>

#define DHTPIN 5
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 8;

int pirPin = 2;

int parpLento = 1000;
int parpRap = 250;

void setup() {

  Serial.begin(9600);
  dht.begin();

  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  pinMode(pirPin, INPUT);

}

void loop() {

  int pirValor = digitalRead(pirPin);
  float humedad = dht.readHumidity();
  float temperatura = dht.readTemperature();

  if (isnan(humedad) || isnan(temperatura)) {

    Serial.println("Fallo al leer del sensor DHT22!");
    return;
    
  }

  // LED VERDE = TEMPERATURA

  if (temperatura >= 20 && temperatura <= 25 ) {

    Serial.println("Temperatura ideal");
    delay(2000);
    digitalWrite(ledVerde, HIGH);

  }

  else if (temperatura < 20) {

    Serial.println("Temperatura baja");
    delay(2000);
    digitalWrite(ledVerde, HIGH);
    delay(parpLento);
    digitalWrite(ledVerde, LOW);
    delay(parpLento);

  }

  else if (temperatura > 25) {

    Serial.println("Temperatura alta");
    delay(2000);
    digitalWrite(ledVerde, HIGH);
    delay(parpRap);
    digitalWrite(ledVerde, LOW);
    delay(parpRap);

  }

  // LED AMARILLO HUMEDAD

  if (humedad >= 40 && humedad <= 60 ) {

    Serial.println("Humedad Ideal");
    delay(2000);
    digitalWrite(ledAmarillo, HIGH);

  }

  else if (humedad < 40) {

    Serial.println("Humedad baja");
    delay(2000);
    digitalWrite(ledAmarillo, HIGH);
    delay(parpLento);
    digitalWrite(ledAmarillo, LOW);
    delay(parpLento);

  }

  else if (humedad > 60) {

    Serial.println("Humedad alta");
    delay(2000);
    digitalWrite(ledAmarillo, HIGH);
    delay(parpRap);
    digitalWrite(ledAmarillo, LOW);
    delay(parpRap);

  }

  // LED ROJO MOVIMIENTO

  if (pirValor == HIGH) {

    digitalWrite(ledRojo, HIGH);
    Serial.println("Se ha detectado movimiento");
    delay(2000);

  }

  else if (pirValor == LOW) {

    Serial.println("No se ha detectado movimiento");
    delay(2000);

  }
  
  }
