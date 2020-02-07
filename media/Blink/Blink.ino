int LED = 5;
int BUTTON = 6;
int value = 0;
int old_value = 0;
int state = 0;
void setup() {
pinMode(LED, OUTPUT);
pinMode(BUTTON, INPUT);

}
void loop() {
value = digitalRead(BUTTON);
if ((value == HIGH)&&(old_value == LOW)){
  state = 1 - state;
  delay(50);
}
old_value = value;
if(state == 1){
  digitalWrite(LED, HIGH);
  }else{
    digitalWrite(LED, LOW);}
}
