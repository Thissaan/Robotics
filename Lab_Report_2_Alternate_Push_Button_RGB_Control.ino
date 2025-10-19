/* Alternate Push button RGB control
The goal of this program is that when we press the PB, the red and blue LED 
of the RGB will be on and when we aren't pressing the PB, the red and green LED of the
 RGB will be on.
The main theme of this program is digital input controlling digital output, because a PB is
used to activate and deactivate the LEDs of the RGB*/
int pushButton = 8; //identify the pin that has the PB, by naming it

// the setup routine runs once when you press reset:
void setup() {
  Serial.begin(9600); // initializing serial communication
  pinMode(12, OUTPUT); //Green LED of the RGB
  pinMode(4, OUTPUT); //Red LED of the RGB
  pinMode(7, OUTPUT); //Blue LED of the RGB
  pinMode(8, INPUT_PULLUP); //identifying the pins as an output or input_pullup depending on the component attached to it
}

// the loop routine runs over and over again forever:
void loop() {
  int buttonState = digitalRead(pushButton); //reads the input_pullup pin to identify its status
  // print out the state of the button:
  Serial.print("buttonState ="); //prints out whatever is in quotations on the serial monitor
  Serial.print("\t") ; //creates a gap between "buttonState =" and the values
  Serial.println(buttonState); //prints out the buttonState value (0 or 1) on the serial monitor
  digitalWrite(12,buttonState); //Green LED will turn on if button is not pressed, 
  digitalWrite(4,1); // Red LED will always be on
  digitalWrite(7,!buttonState); // Blue LED will turn off if button is pressed
  
}

