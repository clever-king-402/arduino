
int switch_pin = 2;
int switch_value ;
int my_led= 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(switch_pin, INPUT);
  pinMode(my_led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  switch_value = digitalRead(switch_pin);
  if(switch_value==HIGH)
  digitalWrite(my_led,HIGH);
  else
  digitalWrite(my_led,LOW);
}
