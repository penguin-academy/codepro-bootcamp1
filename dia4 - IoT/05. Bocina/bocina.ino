#include <DHT.h>

#define DHTPIN 5
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);

int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 8;
int buzzerPin = 7;

void setup() {

  Serial.begin(9600);
  dht.begin();

  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

  pinMode(buzzerPin, OUTPUT);

}

void loop() {

  float humidity = dht.readHumidity();
  float temperatura = dht.readTemperature();

  if (isnan(humidity) || isnan(temperatura)) {

    Serial.println("Fallo al leer del sensor DHT22!");
    return;

  }

  if (temperatura > 5 && temperatura < 17 ) {

    Serial.println("Fresquete");
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledRojo, LOW);
    digitalWrite(ledAmarillo, LOW);

  }

  else if (temperatura > 17 && temperatura < 23) {

    Serial.println("Haku Pora");
    digitalWrite(ledAmarillo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);

  }

  else if (temperatura > 23 && temperatura < 34 ) {

    Serial.println("Hakuroooo");
    digitalWrite(ledRojo, HIGH);
    digitalWrite(ledVerde, LOW);
    digitalWrite(ledAmarillo, LOW);

  }

  else {

    Serial.println("Ñamano mba'e");
    tone(buzzerPin, 1000);
    delay(1000);
    noTone(buzzerPin);

  }

  delay(2000);
  
  }
  // Serial.print("Humedad: ");
  // Serial.print(humidity);
  // Serial.print("% ");
  // Serial.print("Temperatura: ");
  // Serial.print(temperature);
  // Serial.println("°C");
