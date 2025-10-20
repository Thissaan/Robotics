/* Arduino Light Chaser Program 1
The goal of this program is to make four LEDs light up one at a time in a repeating sequence.
Ex: Blue->Green->Red->Yellow
The main theme of this program is Digital Output and Digital Write. We're controlling multiple LEDs using digital pins to create an LED sequence
  */
int x = 250; // gives a value for the time delay and allows for quicker change of delay value
// the setup function runs once when you press reset or power the board
void setup() {
  // assigns pin number used as an output
  pinMode(13, OUTPUT); //Red LED
  pinMode(12, OUTPUT); //Green LED
  pinMode(7, OUTPUT); //Yellow LED
  pinMode(8, OUTPUT); //Blue LED
}
// the loop function runs over and over again forever
void loop() {
  
  digitalWrite(13, 0);  // turns the voltage High only for pin 12, which allows the green LED to turn on. 
  digitalWrite(12, 1);  //Turns the voltage LOW for pins 13,7 and 8, which doesn't allow those LEDs to turn on
  digitalWrite(8, 0);
  digitalWrite(7,0);  
  delay(x);                      // wait for a second. Allows to observe the change of color
  digitalWrite(13, 1);   // turns the voltage High only for pin 13, which allows the red LED to turn on. 
  digitalWrite(12, 0);   // Turns the voltage LOW for pins 7,12 and 8, which doesn't allow those LEDs to turn on
  digitalWrite(7, 0);  
  digitalWrite(8, 0);  
  delay(x);                      // wait for a second. Allows to observe the change of color
  digitalWrite(7, 1);  // turns the voltage High only for pin 7, which allows the yellow LED to turn on.
  digitalWrite(12, 0);  // Turns the voltage LOW for pins 13,12 and 8, which doesn't allow those LEDs to turn on
  digitalWrite(13, 0); 
  digitalWrite(8, 0);  
  delay(x);                      // wait for a second. Allows to observe the change of color
  digitalWrite(7, 0);  // turns the voltage High only for pin 8, which allows the blue LED to turn on. 
  digitalWrite(12, 0);  // Turns the voltage LOW for pins 13,12 and 7, which doesn't allow those LEDs to turn on
  digitalWrite(13, 0); 
  digitalWrite(8, 1);  
  delay(x);                      // wait for a second. Allows to observe the change of color, before restarting the loop
  
}
