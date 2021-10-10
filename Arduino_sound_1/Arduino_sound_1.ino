
void setup() {
  

}

void loop() {
  tune(1000 ,100);
 // tune(1000,200);
  noTone(11);
  delay(100);
  tune(1000 ,100);
 // tune(1000,200);
  noTone(11);
  delay(2000);
 
  
}

void tune (int frequency , int _time){
  tone(11,frequency);
  delay(_time);
}
