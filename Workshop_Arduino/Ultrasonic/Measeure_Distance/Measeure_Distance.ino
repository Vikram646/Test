#define echoPin 9
#define trgPin 10

long duration, distance;
void setup()
{
  pinMode(trgPin, OUTPUT);
  pinMode(echoPin, INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600); 
 }


void loop()
{
  delay(200);
  digitalWrite(trgPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trgPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trgPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration / 2) / 29.1; 
  Serial.print(distance);
  Serial.println(" cm");
  delay(200);

  if(distance<=8)

  {
    digitalWrite(13,1);
  }
  else
  {
     digitalWrite(13,0);
  }
 }
