#define da 5
#define cl 6
#define dy 100
String data = "I'm Hassan. ";
bool bd[14][8];
void setup() {
  Serial.begin(2000000);
  pinMode(da, OUTPUT);
  pinMode(cl, OUTPUT);
  for(int i=0; i<data.length(); i++){
    for(int j=0; j<8; j++){
      bd[i][j]=bitRead(data.charAt(i), j);
    }
  }
  delay (5000);
}

void loop() {
  for(int i=0; i<data.length(); i++){
    for(int j=0; j<8; j++){
      digitalWrite(da, bitRead(data.charAt(i), j));
      //delay (dy);
      Serial.print (cha);
      digitalWrite(cl, HIGH);
      delay (dy);
      digitalWrite(cl, LOW);
      delay (dy);
    }
  }
  //delay (2000);
}
