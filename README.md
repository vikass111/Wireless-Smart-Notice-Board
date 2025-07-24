# Wireless Smart Notice Board

This project demonstrates a real-time, Bluetooth-enabled digital notice board using Arduino and LED matrix display. Messages are sent wirelessly via a smartphone and displayed on a scrolling LED board. It is ideal for classrooms, hospitals, offices, and public spaces where remote and quick updates are needed.

## 🎯 Objective
To develop a wireless notice board system using Bluetooth and Arduino to display real-time messages sent from a mobile phone.

## 📦 Features
- Wireless message transmission using Bluetooth (HC-05)
- Real-time scrolling message display on MAX7219 8x8 LED matrices (4-in-1)
- Supports alphanumeric characters and special symbols
- Ideal for indoor digital signage and low-cost IoT displays

## 🛠️ Technologies & Components Used
- Arduino UNO microcontroller
- HC-05 Bluetooth Module
- 4-in-1 MAX7219 8x8 LED Matrix Display
- LedControl Arduino Library
- Embedded C (Arduino IDE)
- Power Supply (9V Battery or Adapter)

## ⚙️ Working Principle
- User pairs their mobile device with the HC-05 module.
- A message is typed into a Bluetooth terminal app and sent to the Arduino.
- Arduino receives the text over serial communication and maps each character to corresponding LED patterns.
- The characters scroll across the LED display, continuously looping or updating with new messages.

## 🧪 Applications
- Classroom or college announcements
- Hospital message boards
- Waiting room updates
- Office communication boards
- Any place requiring wireless, real-time digital messaging

## 📁 Files Included
- `noticeboard.ino` – Complete Arduino source code for message scrolling
- `README.md` – This documentation file
- pin diagram
- output

## 📸 (Optional)
Include your circuit diagram or demo screenshots here if available.

---

🔧 Mini Project (2024-25)  
🎓 Department of Electronics and Communication Engineering (ECE) – HKBK College of Engineering
