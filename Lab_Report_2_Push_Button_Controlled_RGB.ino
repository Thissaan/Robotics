/* Push Button Controlled RGB
The goal of this program is that when we press the PB, the RGB will be off and when we don't 
pressed the PB, the RGB will be on.
The main theme of this program is digital input controlling digital output, because a PB is
used to activate and deactivate an RGB*/
int pushButton = 4; //identify the pin that has the PB, by naming it
// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); // initializing serial communication
  pinMode(13, OUTPUT); //identifying the pins as an output or input_pullup depending on the component attached to it
  pinMode(12, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(4, INPUT_PULLUP);
}
// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(pushButton); //reads the input_pullup pin to identify its status
  // print out the state of the button:
  Serial.print("buttonState ="); //prints out whatever is in quotations on the serial monitor
  Serial.print("\t") ; //creates a gap between "buttonState =" and the values
  Serial.println(buttonState); //prints out the buttonState value (1 or 0) on the serial monitor
  digitalWrite(13,buttonState); //Will turn the RGB on if the buttonState is 1, or else RGB will be off
  digitalWrite(12,buttonState);
  digitalWrite(8,buttonState);
  delay(1);  // delay in between reads for stability
}

