# Arduino-Based Wireless Environmental Monitoring and Methane Gas Detection Using Bluetooth

An Arduino-based environmental monitoring and methane gas detection system using an MQ-4 gas sensor, HC-06 Bluetooth module, LED, and buzzer. The system continuously monitors methane gas levels and wirelessly transmits real-time readings to a mobile phone through Bluetooth while providing local visual and audible alerts when the gas concentration exceeds a predefined threshold. Watch this on https://youtube.com/shorts/GFs-Is-Qz2k?si=rbg_HZxpI6OcuIGa.

# Overview

This project presents an Arduino-based wireless environmental monitoring and methane gas detection system designed to provide real-time monitoring and early warning of potentially hazardous gas conditions. The system integrates an **MQ-4 methane gas sensor** with an **Arduino Uno** to continuously measure the surrounding gas level.

The Arduino processes the sensor readings and compares them with a predefined threshold value. The measured methane level is displayed through the Serial Monitor and simultaneously transmitted wirelessly to a mobile phone using an **HC-06 Bluetooth module**. This allows users to monitor the gas condition remotely within the Bluetooth communication range.

When the detected methane level exceeds the predefined safety threshold, the system activates an **LED and buzzer alarm** to provide immediate visual and audible warnings. At the same time, a warning message is transmitted to the connected mobile device through Bluetooth.

The project demonstrates a simple, low-cost, and portable approach to environmental safety monitoring by combining embedded systems, gas sensing, wireless communication, mobile-based monitoring, and real-time alert mechanisms.

## Project Objectives

The primary objective of this project is to develop a wireless environmental monitoring system capable of detecting methane gas and providing real-time information and alerts through Bluetooth communication.

The major objectives are to:

* **Monitor methane gas levels in real time.**
* **Use the MQ-4 sensor for methane gas detection.**
* **Process sensor readings using an Arduino Uno.**
* **Transmit real-time gas data wirelessly through Bluetooth.**
* **Enable mobile phone-based monitoring using the HC-06 Bluetooth module.**
* **Provide visual alerts using an LED.**
* **Provide audible warnings using a buzzer.**
* **Detect hazardous gas conditions based on a predefined threshold.**
* **Develop a simple and low-cost environmental safety monitoring solution.**

## System Architecture

The proposed system follows a simple embedded monitoring architecture consisting of sensing, processing, wireless communication, mobile monitoring, and alert mechanisms.

The **MQ-4 sensor** continuously detects methane gas levels from the surrounding environment. Its analog output is connected to the **Arduino Uno**, which acts as the central processing unit of the system.

The Arduino reads and processes the sensor value and compares it with a predefined threshold. The collected gas data are then transmitted through the **HC-06 Bluetooth module** to a connected mobile phone for wireless monitoring.

If the gas level exceeds the specified threshold, the Arduino activates the **LED and buzzer** to generate local warnings and also sends an alert message to the mobile device.

## 🔄 System Workflow

1. 🌫️ **Methane Gas Detection**
   ↓
2. 📟 **MQ-4 Sensor Data Acquisition**
   ↓
3. ⚙️ **Arduino Uno Processing**
   ↓
4. 📊 **Gas Level Analysis**
   ↓
5. 🔵 **HC-06 Bluetooth Communication**
   ↓
6. 📱 **Mobile Phone Monitoring**
   ↓
7. 🚨 **Threshold Detection**
   ↓
8. 💡 **LED Alert**
   +
   🔊 **Buzzer Alarm**

## Methane Gas Monitoring

The **MQ-4 gas sensor** is used as the primary sensing component of the system. It detects methane and other combustible gases and provides an analog output corresponding to the detected gas concentration.

The Arduino continuously reads the sensor value through its analog input pin. These readings are used to monitor changes in the environmental gas condition.

A predefined threshold is used to determine whether the detected gas level is within a normal range or has reached a potentially hazardous level.

## Bluetooth-Based Mobile Monitoring

The **HC-06 Bluetooth module** provides wireless communication between the Arduino-based monitoring system and a mobile phone.

The Arduino transmits the real-time methane sensor readings through Bluetooth, allowing users to observe the monitored gas level directly from a mobile device using a compatible Bluetooth application.

This wireless communication feature eliminates the need for continuous physical observation of the Arduino system and provides a convenient method for monitoring environmental conditions.

## Alert and Warning System

The system incorporates both visual and audible warning mechanisms to provide immediate notification when a high methane gas level is detected.

When the sensor reading exceeds the predefined threshold:

* 💡 **The LED is activated as a visual warning.**
* 🔊 **The buzzer generates an audible alarm.**
* 📱 **A warning message is transmitted to the connected mobile phone through Bluetooth.**

When the gas level remains below the threshold, the LED and buzzer remain inactive, indicating normal operating conditions.

## Hardware Components

The environmental monitoring system incorporates the following major hardware components:

* **Arduino Uno**
* **MQ-4 Methane Gas Sensor**
* **HC-06 Bluetooth Module**
* **LED**
* **Buzzer**
* **Jumper Wires**
* **Breadboard**
* **Mobile Phone for Bluetooth Monitoring**
* **Supporting Power Supply and Interfacing Circuitry**

## Hardware Configuration

The project uses the following Arduino pin configuration:

| Component                               | Arduino Pin          |
| --------------------------------------- | -------------------- |
| **MQ-4 Gas Sensor**                     | A0                   |
| **LED**                                 | Digital Pin 9        |
| **Buzzer**                              | Digital Pin 10       |
| **HC-06 Bluetooth RX/TX Communication** | Digital Pins 2 and 3 |

> **Note:** The Bluetooth module communicates with the Arduino using the `SoftwareSerial` library.

## Software & Communication Technologies

The system combines embedded programming, gas sensing, wireless communication, and mobile-based monitoring.

Major technologies include:

* **Arduino IDE**
* **Arduino Uno**
* **Embedded C/C++**
* **SoftwareSerial Library**
* **MQ-4 Gas Sensing Technology**
* **Bluetooth Communication**
* **HC-06 Bluetooth Module**
* **Mobile Bluetooth Application**

## Key Features

The main features of the proposed system include:

* **Real-Time Gas Monitoring** — Continuously measures methane gas levels.
* **Methane Gas Detection** — Uses the MQ-4 sensor to detect methane and combustible gases.
* **Arduino-Based Processing** — Processes sensor data using an Arduino Uno.
* **Wireless Bluetooth Communication** — Transmits monitoring data using the HC-06 module.
* **Mobile Phone Monitoring** — Allows users to observe methane readings on a mobile device.
* **Threshold-Based Detection** — Compares sensor readings with a predefined safety threshold.
* **Visual Alert** — Uses an LED to indicate hazardous gas conditions.
* **Audible Alarm** — Activates a buzzer when the gas level exceeds the threshold.
* **Real-Time Warning Messages** — Sends alerts through Bluetooth to the connected mobile device.
* **Low-Cost Implementation** — Uses affordable and widely available electronic components.
* **Portable Design** — Can be adapted for different environmental monitoring applications.

## Arduino Program Logic

The Arduino program continuously performs the following operations:

1. Reads the analog value from the MQ-4 gas sensor.
2. Displays the methane level in the Arduino Serial Monitor.
3. Sends the methane level to the connected mobile phone through Bluetooth.
4. Compares the sensor reading with the predefined threshold.
5. Activates the LED and buzzer if the gas level exceeds the threshold.
6. Sends a warning message through Bluetooth during hazardous conditions.
7. Continues monitoring the environment in real time.

## Mobile Monitoring

The HC-06 Bluetooth module enables communication between the Arduino system and a mobile phone. Once paired with a compatible Bluetooth terminal or monitoring application, the mobile device can receive real-time methane gas readings.

The mobile monitoring feature provides:

* **Wireless observation of methane levels**
* **Real-time sensor data reception**
* **Hazard warning messages**
* **Convenient monitoring through a mobile phone**
* **Reduced dependence on physical observation of the system**

## Significance

Methane is a combustible gas, and uncontrolled gas leakage can create potential environmental and safety risks. Continuous monitoring can therefore help provide early awareness of abnormal gas conditions.

This project demonstrates how an **Arduino-based embedded system** can be combined with **gas sensing and Bluetooth communication** to create a simple environmental monitoring solution. The integration of mobile monitoring, visual indicators, and audible alarms improves the accessibility of real-time information and provides immediate warnings when the detected gas level exceeds a predefined threshold.

The system can serve as a foundation for further development of more advanced environmental safety and gas monitoring applications.

## Applications

The proposed system can potentially be adapted for use in:

* **Laboratories**
* **Biogas plants**
* **Gas storage areas**
* **Industrial environments**
* **Waste management facilities**
* **Environmental monitoring applications**
* **Educational and research projects**
* **Indoor gas safety monitoring**

## Future Development

Potential future improvements may include:

* **Integration of Wi-Fi or IoT connectivity** for remote internet-based monitoring.
* **Cloud-based data storage** for historical gas-level analysis.
* **Additional environmental sensors** for temperature, humidity, and air quality monitoring.
* **Mobile application development** with a dedicated graphical user interface.
* **SMS or internet-based alert notifications** for hazardous conditions.
* **Automatic ventilation control** when high gas levels are detected.
* **GPS integration** for location-based environmental monitoring.
* **Machine-learning techniques** for gas-level prediction and anomaly detection.
* **Advanced sensor calibration** for improved gas concentration measurement.
* **Integration with a web-based monitoring dashboard.**

## Project Structure

```text
Arduino-Based-Wireless-Environmental-Monitoring/
│
├── Environmental_Monitoring_System.ino
├── README.md
│
└── images/
    └── Project_Setup.jpg
```

## Conclusion

This project demonstrates the development of a **wireless environmental monitoring and methane gas detection system** using Arduino Uno, an MQ-4 gas sensor, and HC-06 Bluetooth communication. The system provides real-time gas monitoring, mobile phone-based data observation, and immediate visual and audible alerts when hazardous gas conditions are detected.

By combining embedded sensing, Bluetooth communication, and threshold-based alert mechanisms, the project provides a simple and affordable foundation for environmental safety monitoring and future smart monitoring applications.
