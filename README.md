🚗 Bluetooth Controlled Vehicle (Road + Water Compatible)

This project demonstrates a Bluetooth-controlled robotic vehicle using Arduino and an HC-05 Bluetooth module. The robot can move forward, backward, left, right, and stop using commands sent from a mobile phone via Bluetooth.

The vehicle is suitable for road and water-based chassis, depending on the motor and body design.

📌 Features

Wireless control using Bluetooth (HC-05)

Simple character-based command system

Supports basic robot movements

Compatible with Android Bluetooth controller apps

Easy to modify and extend

🧰 Components Required
Component	Quantity
Arduino Uno / Nano	1
HC-05 Bluetooth Module	1
L298N / L293D Motor Driver	1
DC Motors	2
Wheels / Propellers	As needed
Battery (7.4V / 9V / 12V)	1
Jumper Wires	As required
Robot Chassis (Road/Water)	1
🔌 Circuit Connections
🔹 Motor Driver to Arduino
Motor Driver	Arduino
IN1	D2
IN2	D3
IN3	D4
IN4	D5
GND	GND
🔹 Motors

Left motor → OUT1 & OUT2 of motor driver

Right motor → OUT3 & OUT4 of motor driver

🔹 Bluetooth Module (HC-05)
HC-05 Pin	Arduino
VCC	5V
GND	GND
TX	RX (D0)
RX	TX (D1) (use voltage divider)

⚠️ Important: Use a voltage divider for HC-05 RX pin (5V → 3.3V).

⚙️ Working Principle

The Arduino listens for Bluetooth commands via Serial communication.
Each received character controls motor direction using the motor driver.

🎮 Control Commands
Command	Action
F	Move Forward
B	Move Backward
L	Turn Left
R	Turn Right
S	Stop
🧠 Code Logic Summary

Serial baud rate: 9600

Uses digitalWrite() for motor direction control

Switch-case handles commands

Motors run until a new command is received

🚀 How to Use

Upload the code to Arduino

Power the motor driver & Arduino

Pair HC-05 with phone (default PIN: 1234 or 0000)

Open any Bluetooth controller app

Send commands: F B L R S

Control your vehicle wirelessly

📱 Recommended Android Apps

Bluetooth Controller

Arduino Bluetooth Controller

Bluetooth RC Controller

⚠️ Notes & Safety

Do not power motors directly from Arduino

Ensure common GND between Arduino and motor driver

For water vehicles, use waterproof motors and sealed electronics

Disconnect Bluetooth while uploading code
