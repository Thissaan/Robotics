/* Arduino RGB light chaser
The goal of this program is to make an RGB light up one at a time in a repeating sequence
Ex: Red->Green->Blue->White
The main theme of this program is Digital Output and DigitalWrite.We're controlling multiple LEDs using digital pins to create an LED sequence
	*/

int x = 250; // gives a value for the time delay and allows for quicker change of delay value
// the setup function runs once when you press reset or power the board
void setup() {
  // assigns pin number used as an output
  pinMode(13, OUTPUT); //Red LED
  pinMode(12, OUTPUT); //Green LED
  pinMode(8, OUTPUT); //Blue LED
}

// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, 1);  // turns the voltage High only for pin 13, which turns on the red LED of the RGB. 
  digitalWrite(12, 0);  //Turns the voltage LOW for pins 13 and 8, which doesn't allow those LEDs to turn on
  digitalWrite(8, 0);
  delay(x);                      // wait for a second. Allows to observe the change of color
  digitalWrite(13, 0);   // turns the voltage High only for pin 12, which turns on the green LED of the RGB. 
  digitalWrite(12, 1);   // Turns the voltage LOW for pins 13 and 8, which doesn't allow those LEDs to turn on  
  digitalWrite(8, 0);  
  delay(x);                      // wait for a second. Allows to observe the change of color 
  digitalWrite(13,0);     // turns the voltage High only for pin 8, which turns on the blue LED of the RGB.
  digitalWrite(12, 0);    // Turns the voltage LOW for pins 13 and 12, which doesn't allow those LEDs to turn on 
  digitalWrite(8, 1);  
  delay(x);                      // wait for a second. Allows to observe the change of color 
  digitalWrite(12, 1);     // turns the voltage High for all pins, which turns on all the LEDs inside the RGB and emits a white light. 
  digitalWrite(13, 1); 
  digitalWrite(8, 1);  
  delay(x);                      // wait for a second. Allows to observe the change of color, before restarting the loop
  
}
