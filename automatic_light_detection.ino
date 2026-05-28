int ldr = A0;
int led = 13;

void setup() {
pinMode(led, OUTPUT);
}

void loop() {
int value = analogRead(ldr);

if(value < 500) {
digitalWrite(led, HIGH);
}
else {
digitalWrite(led, LOW);
}
}
