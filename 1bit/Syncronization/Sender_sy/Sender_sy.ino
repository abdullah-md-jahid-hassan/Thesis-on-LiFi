#define da 5
#define cl 6
#define dy 2000
void setup() {
  pinMode(da, OUTPUT);
  pinMode(cl, OUTPUT);
}

void loop() {
  digitalWrite(da, HIGH);
  digitalWrite(cl, HIGH);
  delay (dy);
  digitalWrite(da, LOW);
  digitalWrite(cl, LOW);
  delay (dy);
}
