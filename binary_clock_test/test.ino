unsigned int counter = 0;
char bits[] = "00000"; //Vår Bit Array

int pin1 = 3;
int pin2 = 4;
int pin3 = 5; 
int pin4 = 6;

const int button = 0;
int buttonState = 0;
int offButtonState = 0;
 
void convBit(unsigned int x){ //Skicka vårt nummer till funktionen

  bits[4] = (x & 1) + '0'; //Populera vår bit array. en bit åt gången med hjälp av AND.
  x >>= 1;
  bits[3] = (x & 1) + '0';
  x >>= 1;
  bits[2] = (x & 1) + '0';
  x >>= 1;
  bits[1] = (x & 1) + '0';
  x >>= 1;
  bits[0] = x + '0';
}

void setup(){
  pinMode(pin1, OUTPUT)
  pinMode(pin2, OUTPUT)
  pinMode(pin3, OUTPUT)
  pinMode(pin4, OUTPUT)
  pinMode(button, INPUT)
}

void loop(){
  buttonState = digitalRead(button);
  
  if (buttonState = HIGH){ //or variable namn för knapp
    counter ++;
  } 
  if (offButtonState = HIGH){
    counter = 0;
  }
  convBit(counter);  
  if (bits[0]!=0){
    digitalWrite(pin1, HIGH);
  } else
  {digitalWrite(pin1, LOW);}
  if (bits[1]!=0){
    digitalWrite(pin2, HIGH);
  }  else
  {digitalWrite(pin1, LOW);}
  if (bits[2]!=0){
    digitalWrite(pin3, HIGH)
  }  else
  {digitalWrite(pin1, LOW);}
  if (bits[3]!=0){
    digitalWrite(pin4, HIGH);
  }  else
  {digitalWrite(pin1, LOW);}
}

