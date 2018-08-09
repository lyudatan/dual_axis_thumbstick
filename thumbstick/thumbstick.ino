int xValue;
int yValue;
int buttonState;

void setup() {
Serial.begin(9600);
pinMode(A0, INPUT);
pinMode(A1, INPUT);
//pull-up resistor on the push-button pin
pinMode(2, INPUT_PULLUP);
}

void loop() {
// put your main code here, to run repeatedly:
xValue = analogRead(A0);
yValue = analogRead(A1);
buttonState = digitalRead(2);

//print the values
Serial.print("X: ");
Serial.print(xValue);
Serial.print(" Y: ");
Serial.print(yValue);
Serial.print("Button: ");
Serial.print(buttonState);
Serial.println("");

delay(500); // add some delay between reads
}

