import processing.serial.*; //library for serial communication
Serial firstArduinoPort; //creates object "firstArduinoPort" of serial class
Serial secondArduinoPort;   //creates object "secondArduinoPort" of serial class
//==================================================================
void setup()
{
  println(Serial.list()); //prints a list of open ports use this to doublecheck which port is which
  /aqaq/also make sure to assign correct boud rate

  //initialize serials 
  firstArduinoPort = new Serial(this, Serial.list()[3], 38400); //port 4 38400
  firstArduinoPort.bufferUntil(' ');
  secondArduinoPort = new Serial(this, Serial.list()[2], 38400); //port 6
  secondArduinoPort.bufferUntil(' ');
}
//==================================================================
void draw()
{
   if(keyPressed) {
    if (key == 'a' || key == 'A') {
      firstArduinoPort.write("A");
    }
    if (key == 'q' || key == 'Q') {
      firstArduinoPort.write("Q");
    }
    if (key == 'S' || key == 's') {
      secondArduinoPort.write("S");
    }
    if (key == 'W' || key == 'w') {
      secondArduinoPort.write("W");
    }
  }
}
