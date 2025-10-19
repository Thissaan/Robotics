/* Arduino Push Button Pull up
The goal of the program is to display the value of the pushbutton on the serial monitor. 
This is to know if the PB is pressed or not.
When Push button is pressed, the value is 1
When Push button is not pressed, the value is 0
The main theme in this program is digital input(DigitalRead), since we're using a pushbutton and 
determining if it is pressed (1) or not (0)*/
int pushButton = 2; //giving a name to the pin that is connected to the PB
void setup() {
  // put your setup code here, to run once:
Serial.begin(9600); //initializing the serial communication
pinMode(2, INPUT); // Assigning the pushbutton as an input 
}

void loop() {
  // put your main code here, to run repeatedly:
int buttonState = digitalRead(pushbutton); //reads the input pin to identifity its status
Serial.println(buttonState); //prints out the status of the button on the serial monitor
}
