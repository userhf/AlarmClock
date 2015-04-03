boolean bln;
double howlong = 0.00027;
long lng;
long pitcher = 1000;
void setup(){
    howlong = 5; // in hours, how long until the timer goes off? No less than 5 hours, 55 minutes.
    lng = howlong*3600000;
    delay(lng);
}
void loop() {
tone (8, pitcher, (1000/8));
    delay (150);
    if (pitcher < 2500){
      pitcher = pitcher + 10;
  }
    }
