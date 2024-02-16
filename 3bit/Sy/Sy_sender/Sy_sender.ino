#define green 2
#define blue 3
#define red 4
#define cl 5
#define dy 500
#define dy1 500

void setup() {
  Serial.begin(2000000);
  pinMode(green, OUTPUT);
  pinMode(red, OUTPUT);
  pinMode(blue, OUTPUT);
  pinMode(cl, OUTPUT);
  
}

void loop() {
  for (int i=0; i<8; i++){
    switch (i){
      case 0:
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(blue, LOW);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 1:
        digitalWrite(red, LOW);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 2:
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        digitalWrite(blue, LOW);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
      
      case 3:
        digitalWrite(red, LOW);
        digitalWrite(green, HIGH);
        digitalWrite(blue, HIGH);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 4:
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
        digitalWrite(blue, LOW);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 5:
        digitalWrite(red, HIGH);
        digitalWrite(green, LOW);
        digitalWrite(blue, HIGH);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 6:
        digitalWrite(red, HIGH);
        digitalWrite(green, HIGH);
        digitalWrite(blue, LOW);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
        
      case 7:
        digitalWrite(red, HIGH);
        digitalWrite(green, HIGH);
        digitalWrite(blue, HIGH);
        delay (dy1);
        digitalWrite(cl, HIGH);
        delay (dy);
        digitalWrite(cl, LOW);
        break;
    }
    delay(dy1);
  }
  delay(5000);
}
