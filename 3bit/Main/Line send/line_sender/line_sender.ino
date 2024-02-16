#define green 2
#define blue 3
#define red 4
#define cl 5
#define dy1 10
#define dy 100
String data = "I'm Hassan. ";
bool bd [96];
void setup() {
  Serial.begin(9600);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(cl, OUTPUT);
  int k=0,j;
  for(int i=0; i<data.length(); i++){
    for(j=0; j<8; j++,k++){
      bd[k]=bitRead(data.charAt(i), j);
    }
  }
  
}

void loop() {
  for(int i=0; i<96; i+=3){
  digitalWrite(red, bd[i]);
  digitalWrite(green, bd[i+1]);
  digitalWrite(blue, bd[i+2]);
    delay (dy1);
    digitalWrite(cl, HIGH);
    delay (dy);
    digitalWrite(cl, LOW);
    delay (dy1);
  }
  delay(1000);
}
