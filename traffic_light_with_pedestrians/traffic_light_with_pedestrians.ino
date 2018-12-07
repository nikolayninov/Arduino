const int red = 12;
const int yellow = 11;
const int green = 10;

const int redPed = 9;
const int greenPed = 8;

const int button = 2;
int pedOn = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(red,OUTPUT);
  pinMode(yellow,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(redPed,OUTPUT);
  pinMode(greenPed,OUTPUT);

  pinMode(button,INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  
  
  digitalWrite(redPed,HIGH);

  digitalWrite(green,HIGH);
  delay(3000);
  digitalWrite(green,LOW);  

  pedOn = digitalRead(button);
  if(pedOn == HIGH)
  {
    digitalWrite(redPed,LOW);
    digitalWrite(greenPed,HIGH);

    digitalWrite(yellow,HIGH);
    delay(1000);
    digitalWrite(yellow,LOW);
    
    digitalWrite(red,HIGH);
    delay(5000);
    digitalWrite(red,LOW);
    
    digitalWrite(greenPed,LOW);
    digitalWrite(redPed,HIGH);
  }
  else
  {
    digitalWrite(yellow,HIGH);
    delay(1000);
    digitalWrite(yellow,LOW);
    
    digitalWrite(red,HIGH);
    delay(3000);
    digitalWrite(red,LOW);
  }
}
