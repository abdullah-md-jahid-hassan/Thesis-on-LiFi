#define led 4
#define cl A0
#define rm 1500
#define gm 2000
#define bm 3500
#define cm 600
#include <Adafruit_TCS34725.h>
bool wasr=false;

Adafruit_TCS34725 sen = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_1X);

void setup() {
  Serial.begin(2000000);
  pinMode(led, OUTPUT);
  if (!sen.begin()) {
    Serial.println("Could not find the sensor.");
    while (1);
  }
  digitalWrite(led, LOW);
}

void loop() {
  uint16_t r, g, b, c;
  if (analogRead(cl)>cm){
    if (!wasr){
      wasr=true;
      sen.getRawData(&r, &g, &b, &c);
      Serial.print("R= "); Serial.print(r>800); Serial.print(" ");
      Serial.print("G= "); Serial.print(g>1000); Serial.print(" ");
      Serial.print("B= "); Serial.print(b>2000); Serial.print(" ");
      Serial.println("");
    }
  }
  else {wasr=false;}
}
