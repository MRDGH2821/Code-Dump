const int triggerPin=7;
const int echoPin=8;
int duration=11;
int distance;
void setup(){
Serial.begin(9600);
pinMode(triggerPin,OUTPUT);
pinMode(echoPin,INPUT);
 }
void loop(){
digitalWrite(triggerPin,HIGH);
delay(5);
digitalWrite(triggerPin,LOW);
distance=(duration/2)/74;
delay(500);

Serial.print(distance);
Serial.println("inches");
}
