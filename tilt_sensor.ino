int reading=0;
void setup()
{
  pinMode(9,INPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  analogWrite(5,128);
  analogWrite(6,128);
}

void loop()
{
  reading=digitalRead(9);
  if (reading==0){digitalWrite(3,HIGH);
                     digitalWrite(4,HIGH);}
  else {digitalWrite(3,LOW);
        digitalWrite(4,LOW);}
}
