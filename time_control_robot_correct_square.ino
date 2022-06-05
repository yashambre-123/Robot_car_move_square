void setup(){
  // put your setup code here, to run once:
  pinMode(3,OUTPUT); // RIGHT MOTOR
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT); // LEFT MOTOR
  pinMode(9,OUTPUT);
}

void forward()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(9,LOW);
}

void radial_left()
{
  digitalWrite(3,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}

void time_stop()
{
  digitalWrite(3,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(9,LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  forward();
  delay(1100);
  
  radial_left();
  delay(500);
  
  forward();
  delay(1100);
  
  radial_left();
  delay(500);
  
  forward();
  delay(1100);
  
  radial_left();
  delay(500);
  
  forward();
  delay(1100);
  
  time_stop();
  delay(1/0);
} 
