#define cl A1
#define da A0
#define dm 500
#define cm 500
bool red= false;
char cha='?';
int pos=0;

void setup() {
  Serial.begin(2000000);
  pinMode(da, INPUT);
  pinMode(cl, INPUT);
}

void loop() {
  if (analogRead(cl)>cm)
  {
    //Serial.print (cl);Serial.print (" ");Serial.println ((analogRead(da)>dm));
    if (!red){
      red=true;
      cha = cha | ((analogRead(da)>dm) << pos );
      pos++;
      if (pos>7){
        Serial.print (cha);
        cha=0;
        pos=0;
      }
    }
  }
  else{
    red=false;
  }
}
