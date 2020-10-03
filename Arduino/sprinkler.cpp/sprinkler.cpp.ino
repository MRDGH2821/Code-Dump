#include <DS3231.h>


int Relay=4;



// Init the DS3231 using the hardware interface

DS3231  rtc(SDA, SCL);

Time t;

const int onhour =8;//Time

const int onmin=00;

const int offhour=8;

const int offmin=10;

const int offsec=00;


void setup()

{

 // Setup Serial connection

 Serial.begin(115200);

 rtc.begin();

 pinMode(Relay,OUTPUT);

 digitalWrite(Relay,LOW);

 

 // The following lines can be uncommented to set the date and time

 rtc.setDOW(MONDAY);       // Set Day-of-Week to SUNDAY

 rtc.setTime(12,21,30);        // Set the time to 12:00:00 (24hr format)

 rtc.setDate(23,11,2018);   // Set the date to January 1st, 2014

}


void loop()

{


 t=rtc.getTime();

 

 // Send Day-of-Week

 Serial.print(rtc.getDOWStr());

 Serial.print(" ");

 

 // Send date

 Serial.print(rtc.getDateStr());

 Serial.print(" -- ");


 // Send time

 Serial.print(t.hour);

 Serial.print(" Hours ");

 Serial.print(t.min);

 Serial.print(" Minutes ");

 Serial.print(t.sec);

 Serial.println(" Secs ");

 

   

 

 // Wait one second before repeating :)

 delay (1000);


 if(t.hour==onhour && t.min==onmin)

 {

   digitalWrite(Relay,HIGH);

   Serial.println("PUMP ON");

 }

 else if(t.hour==offhour && t.min==offmin && t.sec==offsec)

 {

   digitalWrite(Relay,LOW);

   Serial.println("PUMP OFF");

   

 }

}
