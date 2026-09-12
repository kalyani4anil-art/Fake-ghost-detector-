https://drive.google.com/file/d/1UnOlsE1LxFuRpT_5DFV1gP3TJCLTfL5N/view?usp=drive_link
https://drive.google.com/file/d/1UnOlsE1LxFuRpT_5DFV1gP3TJCLTfL5N/view?usp=drive_link
https://drive.google.com/file/d/1UnOlsE1LxFuRpT_5DFV1gP3TJCLTfL5N/view?usp=drive_link
 Fake Ghost Detector

A fun Arduino-based project that creates a **Fake Ghost Detector** using a PIR motion sensor, gas sensor, I2C LCD, and LED.
 This project is made for entertainment and educational purposes. It does not actually detect ghosts.
 Components

* Arduino Uno
* PIR Motion Sensor (HC-SR501)
* Gas Sensor (MQ-series)
* 16x2 I2C LCD Display
* LED
* 220Ω Resistor
* Breadboard
* Jumper Wires
* USB Cable
 Connections

| Component      | Arduino Uno              |
| -------------- | ------------------------ |
| Gas Sensor AO  | A0                       |
| Gas Sensor VCC | 5V                       |
| Gas Sensor GND | GND                      |
| PIR OUT        | D2                       |
| PIR VCC        | 5V                       |
| PIR GND        | GND                      |
| LED (+)        | D8 through 220Ω resistor |
| LED (-)        | GND                      |
| LCD SDA        | A4                       |
| LCD SCL        | A5                       |
| LCD VCC        | 5V                       |
| LCD GND        | GND                      |

 How It Works

The project uses two sensors:

 PIR Sensor

The PIR sensor detects movement.

When movement is detected:

* LED starts blinking
* LCD displays `GHOST MOVEMENT`
* Warning message appears
 Gas Sensor
The gas sensor measures the surrounding gas level.

If the gas value goes above the set threshold:

* LED starts blinking
* LCD displays `GAS DETECTED`
* Warning message appears
 Safe Mode

When no movement or high gas level is detected:

```text
AREA SAFE
NO GHOST
```

The LED remains OFF.

LCD Display
 Startup
text
FAKE GHOST
DETECTOR


### Ghost Movement

text
!!! WARNING !!!
GHOST MOVEMENT
 Gas Detection
text
!!! WARNING !!!
GAS DETECTED
```
 Safe
text
AREA SAFE
NO GHOST
 LED Behavior

When something is detected, the LED continuously blinks:

```text
ON → OFF → ON → OFF → ON → OFF
```

This gives the project a creepy ghost-detector effect. 
 Software

The project is programmed usi
 How to Run

1. Connect all components according to the connection table.
2. Open the Arduino IDE.
3. Install the `LiquidCrystal_I2C` library.
4. Connect the Arduino Uno to your computer.
5. Select the correct board and COM port.
6. Upload the code.
7. Open the Serial Monitor at **9600 baud**.
8. Move in front of the PIR sensor and watch the detector react.

 Project Goal

The goal of this project is to learn about:

* Arduino programming
* Sensor interfacing
* PIR motion detection
* Analog sensor readings
* LCD displays
* Digital outputs
* Basic embedded systems

 Future Improvements

Possible upgrades:

* Add a push button
* Add multiple LEDs
* Add a servo motor
* Add an OLED display
* Add a sound effect
* Add a "Ghost Hunt" game mode
* Add random creepy messages
* Add ESP32/Wi-Fi functionality
 License
This project is open source and available for educational and personal use.
 Made for fun. Built with Arduino.
