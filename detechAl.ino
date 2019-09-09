void setup() {

  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  

}



void loop() {

  // put your main code here, to run repeatedly:

  if ((digitalRead(1) == HIGH) && (digitalRead(2) == HIGH) && (digitalRead(3) == HIGH) && (digitalRead(4) == HIGH) && (digitalRead(5) == HIGH)){  //sensor zone detection . 
             
              digitalWrite(6,HIGH);     // Activate Alarm
              delay(3000);   
  }
  else{
    digitalWrite(6,LOW);   // deactivate alarm
  }
  delay(1000);

}
