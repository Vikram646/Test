#include <LiquidCrystal.h>    
#define echoPin 9
#define trgPin 10
#define ledIndicator LED_BUILTIN

long duration, distance;

const static int MAXIMUM_LEVEL = 20;
const static int MINIMUM_LEVEL = 105;
unsigned long start_time;
unsigned long cur_time;
unsigned long period = 5000;
static int sirenOn = 0;
int  i=0,j=0;
LiquidCrystal lcd(13,7,2,3,4,5);
void setup()
{
  pinMode(trgPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(12,OUTPUT);
  lcd.begin(16, 2);
  //lcd.clear();
  lcd.print("Person Entered:");
  //Serial.print("Person enter:");
  Serial.begin(9600); 
 }


void loop()
{delay(200);
 digitalWrite(trgPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trgPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trgPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; 
  Serial.print(distance);
  Serial.println(" cm");

 if(distance>=5 && distance<=30)
 {
  if(i==0)
  {
  j++;
  lcd.setCursor(8, 2);
  lcd.print(j);
  digitalWrite(7,1);
  Serial.print("Person Entered:"); 
 Serial.println(j);
  i=1;
  delay(200);
  }
  else
  {
    digitalWrite(12,0);
    }       
 }
 else if (distance<5)
 {
 digitalWrite(12,0);
 }

 else
 {
  i=0;
  digitalWrite(12,0);
 }
 }
