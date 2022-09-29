
#include <IRremote.h>

int RECV_PIN = 11; //recieving pin no
int led1 = 8;  //Output pin, in our case its 13 no for basic lights
int led2 = 9;
int led3 = 10;
int led4 = 12;


IRrecv irrecv(RECV_PIN);
decode_results results;

void setup()
{
  Serial.begin(9600);
  
  pinMode(led1,OUTPUT);
   pinMode(led2,OUTPUT);
  irrecv.enableIRIn(); // Start the receiver
  digitalWrite(led1,HIGH);
  digitalWrite(led2,HIGH);
}

void loop() {
  if (irrecv.decode(&results)) {
    translateIR();
    Serial.println(results.value, HEX);
    irrecv.resume(); // Receive the next value
  }
  delay(100);
}

void translateIR()
{
 switch(results.value)
  {
     case 0x5821 : 
        Serial.println("POWER Button");
        
          if(digitalRead(led1)==LOW || digitalRead(led2)==LOW )
         { digitalWrite(led1,HIGH);
          digitalWrite(led2,HIGH);
        }
        else
         { digitalWrite(led1,LOW); 
           digitalWrite(led2,LOW);
         } 
        break;
      case 0x21 : 
        Serial.println("POWER Button");
        if(digitalRead(led1)==LOW)
          digitalWrite(led1,HIGH);
        else
          digitalWrite(led1,LOW);  
        break;

case 0x4021 : 
        Serial.println("POWER Button1");
        if(digitalRead(led2)==LOW)
          digitalWrite(led2,HIGH);
        else
          digitalWrite(led2,LOW);  
        break;
 case 0x2021 : 
        Serial.println("POWER Button");
        if(digitalRead(led3)==HIGH)
          digitalWrite(led3,LOW);
        else
          digitalWrite(led3,HIGH);  
        break;
        

     default : Serial.println("Other Buttons");
                break;    
  }  
  delay(100);
}
