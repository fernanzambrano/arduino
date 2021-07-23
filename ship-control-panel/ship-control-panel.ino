int switchState = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(3, OUTPUT); //green
  pinMode(4, OUTPUT); //red
  pinMode(5, OUTPUT); //red
  
  pinMode(2, INPUT);  //Switch input
}

  void putOnOffLeds(int val0, int val1, int val2) {
      digitalWrite(3, val0);
      digitalWrite(4, val1);
      digitalWrite(5, val2);  
  }

void loop() {
  // put your main code here, to run repeatedly:
  switchState = digitalRead(2);

  if (switchState == LOW) {
    //Button not pushed
    digitalWrite(3, HIGH); 
    digitalWrite(4, LOW);  
    digitalWrite(5, LOW);    
    
  } else {
    digitalWrite(3, LOW);

    int delayMilli = 10000;
    // Counting from 0 to 7 in binary
    putOnOffLeds(0, 0, 0);delay(delayMilli);
    putOnOffLeds(1, 0, 0);delay(delayMilli);
    putOnOffLeds(0, 1, 0);delay(delayMilli);
    putOnOffLeds(1, 1, 0);delay(delayMilli);
    putOnOffLeds(0, 0, 1);delay(delayMilli);
    putOnOffLeds(1, 0, 1);delay(delayMilli);
    putOnOffLeds(0, 1, 1);delay(delayMilli);
    putOnOffLeds(1, 1, 1);delay(delayMilli);

    delay(500);
  }
}
