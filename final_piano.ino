int p[12]={2,3,4,5,6,7,8,9,10,11,12,13};
void setup() {
  // put your setup code here, to run once:
  pinMode(A0,OUTPUT);
  pinMode(A1,OUTPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT);
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,INPUT);
  pinMode(7,INPUT);
  pinMode(8,INPUT);
  pinMode(9,INPUT);
  pinMode(10,INPUT);
  pinMode(11,INPUT);
  pinMode(12,INPUT);
  pinMode(13,INPUT);
  Serial.begin(9600);
 
}

void loop() {
  // put your main code here, to run repeatedly:
  trig(A0);
  if(dist(6)<90)
    Serial.print('a');
  trig(A1);
  if(dist(7)<90)
    Serial.print('b');
  trig1(5);
  if(dist(13)<100)
    Serial.print('h');   
  trig(A2);
  if(dist(8)<90)
    Serial.print('c');
  trig(A3);
  if(dist(9)<90)
    Serial.print('d');
  trig1(3);
  if(dist(11)<90)
    Serial.print('f');
  trig1(4);
  if(dist(12)<90)
    Serial.print('g');
  trig1(2);
  if(dist(10)<90)
    Serial.print('e');  
  Serial.println();
}
void trig(int x)
{
// Clears the trigPin
digitalWrite(x, 0);
delayMicroseconds(500);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(x, 255);
delayMicroseconds(170);
digitalWrite(x, 0);
// Reads the echoPin, returns the sound wave travel time in microseconds
}
void trig1(int x)
{
// Clears the trigPin
digitalWrite(x,LOW);
delayMicroseconds(12);
// Sets the trigPin on HIGH state for 10 micro seconds
digitalWrite(x,HIGH);
delayMicroseconds(8);
digitalWrite(x,LOW);
// Reads the echoPin, returns the sound wave travel time in microseconds
}
int dist(int x)
{
   long duration = pulseIn(x, HIGH);
// Calculating the distance
   long distance= duration*0.034/2;
// Prints the distance on the Serial Monitor
/*Serial.print("Distance: ");
Serial.println(distance);*/
  return distance;
}
