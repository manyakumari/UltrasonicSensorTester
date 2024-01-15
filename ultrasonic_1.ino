int trig = 4;
int echo = 5;
int distance = 0;
int duration = 0;
int led = 6;
int buzz = 7;

void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
pinMode(trig, OUTPUT);
pinMode(echo, INPUT);
pinMode(led, OUTPUT);
pinMode(buzz, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(trig,LOW);
delay(2);
digitalWrite(trig,HIGH);
delay(10);
digitalWrite(trig,LOW);
duration = pulseIn(echo, HIGH);
distance = (duration*0.034)/2;
Serial.println(distance);
if (distance < 50)
{
digitalWrite(led, HIGH);  
digitalWrite(buzz,HIGH);
}
else
{
digitalWrite(led, LOW);
digitalWrite(buzz,LOW);
}


}
