# Smart-Irrigation-System

Smart low-cost irrigation system using Arduino UNO,  Soil Moisture Sensor,Temperature and Humidity sensor, Submersible DC water pump, HC-05 bluetooth Module

# Abstract

The project describes smart irrigation system using arduino . The system consists of an arduino which is the microcontroller and controls a 5V semi- submersible water pump according to the water level in the soil and also the temperature and humidity of the environment. 
The system automatically turns the water pump on when the moisture level in the soil is very low and turns the water pump off when the moisture level reaches the threshold value. Based on the temperature and humidity in the atmosphere the motor can also be automated by fixing the threshold to both of them.And This project can also be extended by using wifi module or bluetooth module to send the sensor data over a server or an mobile application which lets the farmer to control the system either manually or automatically by implementing the control options.

# Area of utility

* The primary focus of this project is to help the farmers and reduce their work by making the water pump work automatically.
* This project can be implemented in perennial plant irrigation land and also on gardening land.

# Hardware components used

1. Arduino UNO

![arduino image](https://cdn.pixabay.com/photo/2017/03/23/12/32/arduino-2168193_960_720.png)


2. DHT 11 temperaure and Humidity Sensor


![dht11 image](https://potentiallabs.com/cart/image/cache/catalog/Oct-2018%20components/DHT%2011%20sensor%20module1-800x800.jpg)

4. Soil Moisture Sensor


![soil moisture sensor](https://5.imimg.com/data5/HI/OB/MY-9380557/soil-moisture-sensor-500x500.jpg)

5.DC Submersible Water Pump


![dc water pump](https://sc01.alicdn.com/kf/HTB1oF9hAlmWBuNkSndVq6AsApXah.jpg)

6.Breadboard with 400pins


![breadboard](https://5.imimg.com/data5/EP/DC/GB/SELLER-43948449/solderless-breadboard-with-400-points-500x500.jpg)

# Connections
 1. DHT 11 
 * A0 to analog pin 0 of arduino

 * GROUND to ground pin of arduino uno

 * Vcc to pin 5V of arduino uno
 2. Soil Moisture Sensor
  * A1 to analog pin 1 of arduino

 * GROUND to ground pin of arduino uno

 * Vcc to pin 5V of arduino uno
 3. Submersible Water Pump
 * Black wire to ground pin of arduino uno

 * Red wire to 5V VCC
 
 # Screenshot of Results
 
 ![image1](Images/IMG_20181012_190951.jpg)

