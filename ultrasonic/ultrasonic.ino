int trigPin = 9;
int echoPin=10;
int led=7;
long duration=0;
int distance=0;
int count=0,count1=0,i;
void setup() {
  // put your setup code here, to run once:
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);
  pinMode(led, OUTPUT);
  Serial.begin(9600);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, LOW);
  digitalWrite(trigPin,LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);
  int x=digitalRead(echoPin);
  duration=pulseIn(echoPin,HIGH);
  Serial.print("Duration now=");
  Serial.println(duration);
  distance=duration*0.034/2;
  for(i=0;i<15000;i++)
  {
    if(distance<120) count++;
  }
  Serial.print("Distance: ");
  Serial.println(distance);
  //Serial.print("Count now=");
  //Serial.println(count);
  if(count>15000)
  {
    digitalWrite(led, HIGH);
    delay(500);
    Serial.println("Object detected");
    Serial.println(count1++);
    count=0;
    delay(3000);
  }
}
