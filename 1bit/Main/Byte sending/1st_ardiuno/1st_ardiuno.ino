#define da 5
#define cl 6
#define dy 1
#define byt 100
void setup() {
  pinMode(da, OUTPUT);
  pinMode(cl, OUTPUT);
}

void loop() {
  //for(int i=0; i<byt; i++){
  digitalWrite(da, HIGH);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, LOW);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, HIGH);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, LOW);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, HIGH);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, LOW);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, HIGH);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  
  digitalWrite(da, LOW);
  delay (dy);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(cl, LOW);
  delay (dy);
  //}
  delay (50000);
}
