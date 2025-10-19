/* RGB 3 color selector 
This program goal is to control an RGBs outputs to produce 3 different, colors chosen on a color wheel,
 by using different brightness levels of the red, green and blue LED inside the RGB using analogWrite
 The main theme of this program is analog Output control. It shows how we can use
 analogWrite to produce a wide array of colors by controlling the different brightness levels 
 of LEDs (outputs) by using PWM pins,
  */
void setup() {
  //identifying which pin is attached to the RGB and if it is an INPUT or OUTPUT
pinMode(11, OUTPUT); //Attached to the red LED
pinMode(10, OUTPUT); //Attached to the green LED
pinMode(9, OUTPUT); //Attached to the blue LED
}

void loop() {
  // put your main code here, to run repeatedly:
  //Makes the RGB emit a Aqua ligtht
  analogWrite(11,23); //Controls the red LED brightness
  analogWrite(10, 162); //Controls the green LED brightness
  analogWrite(9, 181); //Controls the blue LED brightness
  delay(1000); //Gives time to observe the color and color change
  //Makes the RGB emit Yellow light
  analogWrite(11, 255); //Controls the red LED brightness
  analogWrite(10, 250); //Controls the green LED brightness
  analogWrite(9, 25); //Controls the blue LED brightness
  delay(1000); //Gives time to observe the color and color change
  //Makes the RGB emit a slightly dark Pink light
  analogWrite(11, 216); //Controls the red LED brightness
  analogWrite(10, 64); //Controls the green LED brightness
  analogWrite(9, 202); //Controls the blue LED brightness
  delay(1000); //Gives time to observe the color and color change
}
