#define led 3
#define cl A0
#define rm 1500
#define gm 2000
#define bm 3500
#define cm 600
#include <Adafruit_TCS34725.h>
bool wasr=false, bd[96];
char cha='?';

Adafruit_TCS34725 sen = Adafruit_TCS34725(TCS34725_INTEGRATIONTIME_50MS, TCS34725_GAIN_16X);
int i=0, l=0;

void setup() {
  Serial.begin(9600);
  pinMode(4, OUTPUT);
  if (!sen.begin()) {
    Serial.println("Could not find the sensor.");
    while (1);
  }
  sen.setGain(TCS34725_GAIN_16X);
  sen.setIntegrationTime(TCS34725_INTEGRATIONTIME_50MS);
  digitalWrite(4, LOW);
}

void loop() {
  uint16_t r, g, b, c;
  if (analogRead(cl)>cm){
    if (!wasr){
      wasr=true;
      sen.getRawData(&r, &g, &b, &c);
      
      bd[i]=r>450;
      bd[i+1]=g>350;
      bd[i+2]=b>800;
      
      i+=3;
      if(i>95){
        for (int j=0; j<12; j++){
          for (int k=0; k<8; k++){
            cha = cha | (bd[l] << k);
            l++;
          }
          Serial.print (cha);
        }
        l=0;
        i=0;
      }
    }
  }
  else {wasr=false;}
}
