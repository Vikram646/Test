#include <dht.h>
#include <LiquidCrystal.h>

dht DHT;
LiquidCrystal lcd(7, 6, 5, 4, 3, 2);
#define DHT11_PIN 10

void setup() {
  Serial.begin(9600);
  pinMode(10, INPUT);
  pinMode(13, OUTPUT);
  
 // display_setup();
  delay(1000);
}

void display_setup()
{
  lcd.clear();
  lcd.begin(20, 4);   // set up the LCD's number of columns and rows:
  lcd.setCursor(1, 0);
  lcd.print("Temp=  C");
  lcd.setCursor(1, 1);
  lcd.print("Humidity=  %");
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  int T=DHT.temperature;
  lcd.setCursor(6,0);
  lcd.print(T);
  Serial.print("Temp=");
  Serial.print(T);
  if(T>=30)
  {
    digitalWrite(13,1);
    
  }

  else
  {
    digitalWrite(13,0);
  }
  int H=DHT.humidity;
  Serial.print('\t');
  Serial.print("Humidity=");
  Serial.println(H);
  lcd.setCursor(10,1);
  lcd.print(H);
  delay(1000);
  
}
