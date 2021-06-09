
void setup() {
  Serial.begin(9600); // open serial port, set the baud rate as 9600 bps
}
void loop() {
  int SoilMoisture; //create a variable to store the data from the sensor
  SoilMoisture = analogRead(0); //connect sensor to Analog 0
  
  Serial.print(" Soil Moisture: ");
  Serial.println(SoilMoisture); //prints the value to serial port

  if (SoilMoisture < 100)
  {
    Serial.println(" The soil is too dry"); //The system prints this message when the moisture level is below 100
  }
  else if ( SoilMoisture < 301)
  {
    Serial.println(" The soil is dry"); //The system prints this message when the moisture level is between 101 and 301.
  }
  else if( SoilMoisture < 701)
  {
    Serial.println(" The soil is moist"); //The system prints this message when the moisture level is between 302 and 701.
  }
  else if ( SoilMoisture < 890)
  {
    Serial.println( "The soil is wet"); //The system prints this message when the moisture level is between 702 and 890.
  }
  else { Serial.println (" The soil is too wet");} //The system prints this message when the sensor readings do not fall under all the conditions above.


  
  delay(3000); // Delays the loop by 3 seconds
}
