


int ledgreen = 2;
int ledyellow = 3; 
int ledred = 4;
int buttonstate = 0;

const int knapp1 = 7;
const int knapp2 = 8;


void setup() {
  pinMode(ledgreen, OUTPUT); 
  pinMode(ledyellow, OUTPUT);
  pinMode(ledred, OUTPUT);
  pinMode(knapp1, INPUT);
  pinMode(knapp2, INPUT); 
}

void check(){
  if (buttonstate == HIGH) {
  
    digitalWrite(ledred, HIGH);
    delay(50);
    digitalWrite(ledred, LOW);
    delay(50);
        
  }
}  
   
void loop(){
  buttonstate = digitalRead(knapp1);
 
check();
  
 digitalWrite(ledgreen, HIGH);
 delay(100); 
 digitalWrite(ledgreen, LOW);
 delay(100); 
 
}
