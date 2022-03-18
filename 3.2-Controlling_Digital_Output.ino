pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(8, LOW);
  delay(200);
  digitalWrite(8, HIGH);
  delay(200);
   digitalWrite(8, LOW);
   delay(200);
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(200);
  digitalWrite(7, LOW);
  delay(200);
  digitalWrite(7, HIGH);
  delay(200);
   digitalWrite(7, LOW);
   
   
   
   
   
}

// the loop function runs over and over again forever
void loop(){
digitalWrite(8, HIGH);
delay(200);
digitalWrite(8, LOW);
digitalWrite(7, HIGH);
delay(200);
digitalWrite(7, LOW);
delay(200);
}
