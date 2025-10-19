/* Arduino Blink 
The goal of this program is to get an LED to blink continuously with a fixed interval.
The main theme of this program is digital output control. It shows how to send HIGH (1) 
and LOW (0) signals to a digital pin (13) to turn an LED on and off continuously.
 */
void setup() {
  pinMode(13, OUTPUT); // the setup runs once when the program is started and we've
  identified the pin number the LED is connected to as an OUTPUT
}

// the loop function is repeated over and over
void loop() {
  digitalWrite(13, 1);  // The LED is turned on by making voltage HIGH(1) is flowing through
  delay(1000);                      // wait for a second (1000ms=1s)
  digitalWrite(13, 0);   // The LED is turned off by making the voltage LOW
  delay(1000);                      // wait for a second before restarting as it is a loop
}
