# PWM-Based-DC-motor-Speed-Control-using-8051

It is important to control the speed of DC motor in many applications, where precision and protection are essential. Here we will use a technique called PWM (Pulse Width Modulation) to control the speed of DC motor. Here we will use 8051 controller to produce PWM wave. By varying the width of this PWM wave, we can control the speed of DC motor.


**Circuit Components:** 
* 8051 Microcontroller 
* 11.0592 MHz Crystal 
* Capacitors – 33pF (x 2), 10µF , 2200 µF 25V(x2)
* Resistors – 1KΩ (x 4), 10KΩ (x 2)
* 12V DC motor
* L298N Motor Driver 
* Push Buttons (x 5) 
* 1KΩ x 8 Pull-up Resistor Pack 
* Serial Cable 
* 12V battery or adaptor
* Connecting wires
* Center tapped transformer( 230V/ 5V)
* Power diodes - 6A (x 4)
* Voltage Regulator – IC 7805 & 7905

![Block Diagram](https://user-images.githubusercontent.com/42312238/80487349-497a7900-897a-11ea-8311-b21888ad24fd.png)


**Circuit Description:**

The circuit consists of one 8051 Microcontroller, L298N Motor Driver Module, a DC Motor and a few push buttons. Generally, we can interface switches to the microcontroller in two configurations: one is Pull-up configuration and another is Pull-down configuration. In our circuit we are using pull-up configuration. So, we need to check for logic 0 in order to know whether the button is pressed or not. In our circuit we have used 4 switches, for controlling DC motor, it is basically for slow speed, medium speed, high speed and to stop the motor.


**Circuit Diagram:**
![Circuit Diagram](https://user-images.githubusercontent.com/42312238/80487534-9eb68a80-897a-11ea-8ad8-6bd22bdec8e0.jpg)


**Power Supply Circuit Diagram:**
* Instead Of 7812 & 7912 we have used 7805 &7905

![PowerSupply](https://user-images.githubusercontent.com/42312238/80487654-cf96bf80-897a-11ea-818f-fd68b8e0eebf.jpg)


**Code:**

    Please refer pwm_dc_motor.c file. We have implemented this in Keil Software.


Please find the link to download Keil Software:

[Click here to download](https://www.keil.com/download/)




***HAPPY LEARNING!!***
