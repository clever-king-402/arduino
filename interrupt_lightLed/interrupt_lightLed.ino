
//Using an interrupt pin to capture an R/C pulse length
// Code Example – Using an Interrupt pin to capture an R/C pulse length
// Connect signal from R/C receiver into Arduino digital pin 2
// Turn On R/C transmitter ed when using the Arduinos two external interrupts is that
// If valid signal is received, you should see the LED on pin 13 turn On.
// If no valid signal is received, you will see the LED turned Off.

const int meLed= 13;

volatile long servo_starttime;
volatile unsigned int pulse;

int servo_val ;

void setup(){
pinMode(meLed, OUTPUT);
pinMode(servo_val,INPUT);
attachInterrupt(0, rc_begin, RISING);
}

void rc_begin(){
  servo_starttime = micros();
  detachInterrupt(0);
  attachInterrupt(0, rc_end, FALLING);
}

void rc_eng(){
  pulse = micros() - servo_starttime;
  detachInterrupt(0);
  attachInterrupt(0, rc_begin, RISING);
}

void loop(){
  servo_val = pulse;
  if(servo_val > 600 && servo_val < 2400){
    digitalWrite(myLed,  HIGH);
    Serial.print(servo_val);
  }
  else {
  digitalWrite(myLed,  LOW);
  }
}