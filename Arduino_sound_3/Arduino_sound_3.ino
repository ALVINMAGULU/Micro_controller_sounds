
void setup() {
  

}

void loop() {
  tune(1000 ,400);
 tune(800,300);
  noTone(11);
  delay(100);
  tune(900 ,400);
 tune(500,300);
  noTone(11);
  delay(2000);
 
  
}

void tune (int frequency , int _time){
  tone(11,frequency);
  delay(_time);
}
