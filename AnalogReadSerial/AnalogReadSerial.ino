const int trigPin = 9;
const int echoPin = 10;
  int distance_us=0;
  int distance_cm=0;

void setup(){
  Serial.begin(9600);
  pinMode(trigPin,OUTPUT);
  pinMode(echoPin,INPUT);

}

void loop(){
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin,LOW);
  distance_us = pulseIn(echoPin,HIGH);
  distance_cm = 0.017*distance_us;
  Serial.print("distance : ");
  Serial.println(distance_cm);
  Serial.print((" cm"));

  delay(500);
}