/*
    Project name : Pressure sensor
    Modified Date: 14-06-2024
    Code by : Projectslearner
    Website : https://projectslearner.com/learn/arduino-mega-pressure-sensor
*/

const int pressureSensorPin = A0; // Analog pin connected to the pressure sensor

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  int sensorValue = analogRead(pressureSensorPin); // Read analog value from pressure sensor
  
  // Convert analog value to voltage (0-5V)
  float voltage = sensorValue * (5.0 / 1023.0);
  
  // Print the sensor value and voltage to the Serial Monitor
  Serial.print("Pressure Sensor Value: ");
  Serial.println(sensorValue);
  Serial.print("Voltage: ");
  Serial.print(voltage);
  Serial.println(" V");
  
  delay(1000); // Add a small delay before the next reading
}
