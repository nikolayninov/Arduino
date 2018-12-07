int green = 4;
int yellow = 3;
int red = 2;

void setup()
{
  // put your setup code here, to run once:
  pinMode(green, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(red, OUTPUT);
}

void loop()
{
  // put your main code here, to run repeatedly:
  digitalWrite(green, HIGH);
  delay(500);
  digitalWrite(green, LOW);
  digitalWrite(yellow, HIGH);
  delay(500);
  digitalWrite(yellow, LOW);
  digitalWrite(red, HIGH);
  delay(500);
  digitalWrite(red, LOW);
}
