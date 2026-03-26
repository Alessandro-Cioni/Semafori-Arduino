int stato;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(8, INPUT);
}

void loop()
{
  stato = digitalRead(8);

  if (stato == HIGH) {
    digitalWrite(13, HIGH);
    delay(3000);
    digitalWrite(13, LOW);
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
    digitalWrite(11, HIGH);
    delay(3500);
    digitalWrite(11, LOW);
  } else {
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);
    digitalWrite(11, LOW);
  }
}