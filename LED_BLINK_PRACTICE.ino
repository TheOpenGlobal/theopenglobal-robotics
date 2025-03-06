#define led_pin 8

void setup() {
  // We're going to write to the pin, so we set its mode to OUTPUT 
  pinMode(led_pin, OUTPUT);
}

void loop() {
  digitalWrite(led_pin,HIGH); // Turn the LED on
  delay(1000); // wait a second

  digitalWrite(led_pin,LOW); // Turn the LED off
  delay(1000); // wait a second
}
