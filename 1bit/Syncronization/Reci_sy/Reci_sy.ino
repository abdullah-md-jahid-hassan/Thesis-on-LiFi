#define cl A1
#define da A0
#define dm 600
#define cm 250

void setup() {
  Serial.begin(2000000);
  pinMode(da, INPUT);
  pinMode(cl, INPUT);
}

void loop() {
  Serial.print(analogRead(da));
  Serial.print(" ");
  Serial.println(analogRead(cl));
}
