## Temperature and Humidity Monitor with DHT11 and 1602 LCD

## Overview
This project uses an Arduino to read temperature and humidity values from a DHT11 sensor and displays them on a 16x2 LCD screen (HD44780 controller) without using I2C. The sensor data is updated every 2 seconds. It’s a great beginner project to learn how to control digital pins, read sensor data, and display information using the Arduino IDE.

## What I Learned
- How to control digital pins on the Arduino to communicate with sensors and displays.
- How to program and handle digital input/output in the Arduino IDE.
- How to read and interpret sensor data (temperature and humidity) using a DHT11.
- How to display information on a 1602 LCD in 4-bit mode without using an I2C module.
- Basic error handling to detect sensor read failures.

## Components Used:
- Arduino Uno (or compatible)
- DHT11 temperature and humidity sensor
- 16x2 LCD display (HD44780, parallel interface)
- 220 Ω resistor for LCD backlight
- Breadboard and jumper wires

## Wiring Summary
- DHT11 Data pin to Arduino digital pin 2
- LCD pins connected as follows:
- RS → Arduino pin 12
- E → Arduino pin 11
- D4 → Arduino pin 5
- D5 → Arduino pin 4
- D6 → Arduino pin 3
- D7 → Arduino pin 6
- LCD Contrast (V0) connected directly to GND (no potentiometer)
- LCD Backlight Anode through 220 Ω resistor to 5V, Cathode to GND

## How to Use
- Connect all components as described above.
- Upload the Arduino sketch.
- The LCD will display the current temperature in °C on the first line and humidity (%) on the second.
- If the sensor cannot be read, an error message "Sensor Error" will be shown.
