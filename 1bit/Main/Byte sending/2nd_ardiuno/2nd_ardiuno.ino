#define cl A1
#define da A0
#define dm 600
#define cm 250
bool red= false;
bool clbool;
bool res;

void setup() {
  Serial.begin(9600);
  pinMode(da, INPUT);
  pinMode(cl, INPUT);
}

void loop() {
  if (clbool=analogRead(cl)<cm)
  {
    if (!red){
      red=true;
      Serial.println(res=analogRead(da)>dm);
    }
  }
  else{
    red=false;
  }
}
