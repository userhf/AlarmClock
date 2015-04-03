boolean stop = false;
long pitcher = 1000;
void setup(){
}
void loop() {
tone (8, pitcher, (1000/8));
    delay (150);
    if (pitcher < 2500){
      pitcher = pitcher + 10;
      stop = true;
  
  }
    }
