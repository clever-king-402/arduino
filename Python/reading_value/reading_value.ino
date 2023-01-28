// int count = 1;
int dly = 1000;
int x=1;
int y=2;
int z=3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  // Serial.print(count);
  // Serial.println("Ranjit");
  
  x+=2;
  y+=5;
  z+=4;
  Serial.print(x);
  Serial.print(",");
  Serial.print(y);
  Serial.print(",");
  Serial.println(z);
  delay(dly);
  // count++;
}
