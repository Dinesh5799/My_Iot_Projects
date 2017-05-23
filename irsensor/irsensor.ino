int led_pin=7;
int led = 13;
int count=0,count1=0;
int i=0;
void setup() {
  // put your setup code here, to run once:
pinMode(led_pin,INPUT);
pinMode(led, OUTPUT);
Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, LOW);
int x=digitalRead(led_pin);
for(i=0;i<300;i++)
{
  if(x==HIGH)
   count++;
}
if(count==300)
{
  digitalWrite(led, HIGH);
  delay(500);
  Serial.println("Object detected");
  Serial.println(count1++);
}
}
