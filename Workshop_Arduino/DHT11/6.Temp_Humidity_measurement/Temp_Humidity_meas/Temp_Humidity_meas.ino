#include <dht.h>

dht DHT;
#define DHT11_PIN 10

void setup() 
{
  Serial.begin(9600);
   delay(1000);
}

void loop()
{
  int chk = DHT.read11(DHT11_PIN);
  int T=DHT.temperature;
  //lcd.setCursor(6,0);
  //lcd.print(T);
  Serial.print("Temp=");
  Serial.print(T);
  if(T>=26)
  {
    Serial.println("Temp. is higher than set Value");
  }
  
  int H=DHT.humidity;
  Serial.print('\t');
  Serial.print("Humidity=");
  Serial.println(H);
  delay(1000);
  
}
