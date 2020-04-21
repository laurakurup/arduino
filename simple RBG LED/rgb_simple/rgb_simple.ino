// lights up an RGB LED the color purple

const int redPin = 11;
const int greenPin = 10;
const int bluePin = 9;

int r = 80;
int g = 0;
int b = 80;

void setup() {
  
  //Initiate Serial communication.
  Serial.begin(9600);
  Serial.println("hello world");

  analogWrite(redPin, r);
  analogWrite(greenPin, g);
  analogWrite(bluePin, b);

}


void loop() {

}
