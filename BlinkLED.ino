/* This is our first program. It will make the 
output of pin 0 on the Bean go high for one 
second, then low for one second. This will repeat 
as long as the program is running because the 
code is within a loop()  */

// Pin 0 will be set to the variable led1
int led1 = 0; 



void setup() {
  // put your setup code here, to run once:
  pinMode(led1, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led1, HIGH); 
  delay(1000);
  digitalWrite(led1, LOW);
  delay(1000);
}
