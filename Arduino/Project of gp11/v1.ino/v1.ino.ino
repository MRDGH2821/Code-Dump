int IR1 = A3;
int IRalert1=0; // variable for reading the pushbutton status
const int trigPin = 2;
const int echoPin = 3;
int LED = 13;
int sp1 = 6;
int sp2 = 7;
long duration;
int distanceCm;
void setup() {
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(IR1, INPUT); 
pinMode(sp1, OUTPUT);
pinMode(sp2, OUTPUT);
digitalWrite(sp1, HIGH);
digitalWrite(sp2, HIGH);
pinMode(LED, OUTPUT);
digitalWrite(LED, LOW);
delay (6000);
}
void loop() {
digitalWrite(trigPin, LOW);
delayMicroseconds(2);
digitalWrite(trigPin, HIGH);
delayMicroseconds(10);
digitalWrite(trigPin, LOW);
duration = pulseIn(echoPin, HIGH);
distanceCm= duration*0.034/2;
delay(10);
if((distanceCm >= 100) & (distanceCm <= 200)) 
{
digitalWrite(sp2,HIGH);
digitalWrite(LED, LOW);
delay(500);
}
if((distanceCm >= 2) & (distanceCm <= 50)) 
{
digitalWrite(LED, HIGH);
digitalWrite(sp2,LOW);
digitalWrite(LED,HIGH);
delay(1000);
digitalWrite(sp2,HIGH);
}
IRalert1 = digitalRead(IR1);
if (IRalert1 == HIGH)
{
digitalWrite(sp1,LOW);
digitalWrite(LED,HIGH);
delay(1000);
digitalWrite(sp1,HIGH);
}
}
