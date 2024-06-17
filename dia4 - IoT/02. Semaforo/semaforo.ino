int ledRojo = 13;
int ledAmarillo = 12;
int ledVerde = 8;

int tiempoDelay = 500;

void setup() {

  pinMode(ledRojo, OUTPUT);
  pinMode(ledAmarillo, OUTPUT);
  pinMode(ledVerde, OUTPUT);

}

void loop() {

    digitalWrite(ledRojo, HIGH); 
    delay(tiempoDelay); // 
    digitalWrite(ledAmarillo, HIGH);
    delay(tiempoDelay);
    digitalWrite(ledRojo, LOW); // 
    delay(tiempoDelay); // 
    digitalWrite(ledAmarillo, LOW);
    delay(tiempoDelay);

    digitalWrite(ledVerde, HIGH); 
    delay(tiempoDelay); // 
    digitalWrite(ledVerde, LOW); // 
    delay(tiempoDelay); // 
 
}