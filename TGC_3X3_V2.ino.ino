/*
  this project uses some code 
writen by Scott Fitzgerald,
if you do not plan to use a power button delete the line
if (power == 1) 

Writen By Toby Cowles 
TGC TECHNOLOGY 
BASIC 3X3 LED v2 

 */

int power = 0; // leave as 0 if you want the cube to be off by default or change to 1 for on
// the setup function runs once when you press reset or power the board
int button = 0;
void setup() {
  // initialize digital pin 13 as an output.
  pinMode(1, OUTPUT);
   pinMode(2, OUTPUT);
    pinMode(3, OUTPUT);
     pinMode(4, OUTPUT);
      pinMode(5, OUTPUT);
       pinMode(6, OUTPUT);
        pinMode(7, OUTPUT);
         pinMode(8, OUTPUT);
          pinMode(9, OUTPUT);
           pinMode(10, OUTPUT);
           pinMode(11, INPUT);
          
}

// the loop function runs over and over again forever
void loop() {
button = digitalRead(11);


if (power == 1) // delete this line if you are not planing on useing a momentary switch for power 
  {digitalWrite(10, HIGH);
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(9, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(1, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(2, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(3, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(4, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(9, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(8, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(7, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
  digitalWrite(6, LOW);   // turn the LED off (low is the voltage level)
  delay(500);              // wait for half a second
   digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, LOW); // turn the LED off by making the voltage LOW
  delay (1000);
   digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
  delay (1000);
  digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (1000);
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, LOW);   // turn the LED on (HIGH is the voltage level)
  delay (1000);
    digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay (1000);
  digitalWrite(1, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(2, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(3, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(4, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(5, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(6, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(7, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(8, LOW);   // turn the LED on (HIGH is the voltage level)
  digitalWrite(9, LOW);   // turn the LED on (HIGH is the voltage level)
  delay (1000);
    digitalWrite(1, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(1, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(2, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(3, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(3, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(4, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(4, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(5, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(5, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(6, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(6, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(7, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(7, LOW);    // turn the LED off by making the voltage LOW
   digitalWrite(8, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(8, LOW);    // turn the LED off by making the voltage 
  digitalWrite(9, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(1000);              // wait for a second
  digitalWrite(9, LOW); }   // turn the LED off by making the voltage 
  
if ((button == HIGH) && (power == 1))
power = 0;
else if ((button == HIGH) && (power == 0))
power = 1;
  
 
 
 
 
 
 
 
 
 
}
