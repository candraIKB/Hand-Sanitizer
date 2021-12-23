void setup() {
  pinMode(2, INPUT);//define arduino pin
  pinMode(3, OUTPUT);//define arduino pin
  Serial.begin(9600);//enable serial monitor
}
void loop() {
 int value = digitalRead(2);//get value and save it boolean veriable
  if (value == LOW) 
  { //check condition ada tangan atau tidak
    Serial.println("ON");//print serial monitor ON
    digitalWrite(3,HIGH);//Motor Hidup
    delay (1000);
    Serial.println("OFF");//print serial monitor ON
    digitalWrite(3,LOW);//Motor Mati
    delay (1000);
  
  
  if(value == LOW && 3 == HIGH)
{
    Serial.println("Ganti Tangan");//print serial monitor ON
    digitalWrite(3, LOW);//Motor Mati
  
}
  else {
    digitalWrite(3,LOW);//led off
  
  }
  }
}
