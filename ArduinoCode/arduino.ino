//including the header of DHT-11 temperature and humidty sensor.
#include<dht.h>

//creating the instance of the sensor 
dht DHT;

//  if you require to change the pin number, Edit the pin with your arduino pin.
#define DHT11_PIN 3 

//  this void setup function runs only once
void setup() 
{
  
//  begin the serial communication at a baud rate of 9600
Serial.begin(9600); 


// Welcome message to the Farmer 
Serial.println("Welcome to Smart Irrigation portal " );  

// Analog pin to which soil moisture sensor is connected to.
pinMode(A0,INPUT);

// defined the digital pin to which DC water pump is connected to.
pinMode(9,OUTPUT);

}

// this void loop() function runs continously.
void loop() {  
  
// reads data from the dht11 pin
int chk = DHT.read11(DHT11_PIN);

int sensorValue = analogRead(A0); 

Serial.println(" Humidity is....." ); 

// displaying the humidity percentage in the air.
Serial.println(DHT.humidity, 1); 

Serial.println(" Temparature is..... "); 


// displaying the temperature .
Serial.println(DHT.temperature, 1);

// We can put diferent thresholds for different types of soil.
Serial.println("Soil Moisture Content is....");

// considered only 2 cases whether to switch on pump or not ,based on the soil moisture thresholds
if(sensorValue>400)

{

// Switch on pump.
digitalWrite(9,HIGH);

// waits for 2000 to read another data.
delay(2000);
}
else{
  
// Switch off pump.
digitalWrite(9,LOW);

delay(2000);
}
//  Writing the data to the screen
  Serial.println(sensorValue);
  delay(2000); 
 
}
                                               /*Code Written by Bille Giriteja */ 
