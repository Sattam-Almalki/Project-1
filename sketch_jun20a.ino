  #include <Servo.h>
  
  Servo servo01;  // create servo object to control a servo
  Servo servo02;
  Servo servo03;
  Servo servo04;
  Servo servo05;
  
  int p0 = 0; int p1= 1; int p2=2; int p3=3; int p4=4;  // analog pin used to connect the potentiometer
  int val01;  int val02;int val03; int val04; int val05;    // variable to read the value from the analog pin
  
  void setup() {
    servo01.attach(11); servo02.attach(10); servo03.attach(9);servo04.attach(6); servo05.attach(5); // attaches the servo on pins to the servo object
  }
  
  void loop() {
    val01 = analogRead(p0);            // reads the value of the potentiometer (value between 0 and 1023)
    val01 = map(val01, 0, 1023, 0, 90);     // scale it to use it with the servo (value between 0 and 90)
    servo01.write(val01);                  // sets the servo position according to the scaled value
    val02 = analogRead(p1);            // reads the value of the potentiometer (value between 0 and 1023)
    val02 = map(val02, 0, 1023, 0, 90);     // scale it to use it with the servo (value between 0 and 90)
    servo02.write(val02);                  // sets the servo position according to the scaled value
    val03 = analogRead(p2);            // reads the value of the potentiometer (value between 0 and 1023)
    val03 = map(val03, 0, 1023, 0, 90);     // scale it to use it with the servo (value between 0 and 90)
    servo03.write(val03);                  // sets the servo position according to the scaled value
    val04 = analogRead(p3);            // reads the value of the potentiometer (value between 0 and 1023)
    val04 = map(val04, 0, 1023, 0, 90);     // scale it to use it with the servo (value between 0 and 90)
    servo04.write(val04);                  // sets the servo position according to the scaled value
    val05 = analogRead(p4);            // reads the value of the potentiometer (value between 0 and 1023)
    val05 = map(val05, 0, 1023, 0, 90);     // scale it to use it with the servo (value between 0 and 90)
    servo05.write(val05);                  // sets the servo position according to the scaled value
    delay(20);                           // waits for the servo to get there
  }
