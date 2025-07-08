# 💡 LED Alternate Blink Pattern – 500ms Delay

💡 What This Project Does:
This Arduino project makes 8 LEDs blink in an alternating pattern.  
First 4 LEDs stay ON while the next 4 remain OFF — then the pattern flips every **500 milliseconds**.


---
## 🔧 Components Used

- 🔌 **Arduino UNO** – Main microcontroller board
- 💡 **8 x LEDs** – To show output pattern
- 🔹 **8 x 220Ω Resistors** – Current limiting for each LED
- 🔗 **Breadboard** – Easy wiring & prototyping
- 🧵 **Jumper Wires** – For connections
- 🔌 **USB Cable** – For uploading code
  
---

## 🧠 How It Works

- 8 LEDs are connected to digital pins **2 to 9**
- The LEDs are divided into 2 groups:
  - **Group A (LED 1–4):** Pins 2–5
  - **Group B (LED 5–8):** Pins 6–9
- First, Group A is turned ON and Group B is OFF
- After 500 milliseconds, the states flip
- This cycle repeats in the `loop()`

---

🧾 **[🔗 View Arduino Code – LED_switch_on_off.ino](./LED_switch_on_off.ino)**


## 📷 Project Preview

This project alternates 8 LEDs in two clear phases using `LED_switch_on_off.ino`.  
Below are real pictures showing both LED states.

---

### 🔴 Phase 1 – First 4 LEDs ON, Last 4 OFF

<img src="LED_phase_1.jpg" width="500"/>

---

### 🔵 Phase 2 – First 4 LEDs OFF, Last 4 ON

<img src="LED_phase_2.jpg" width="500"/>

---

📝 These images represent the result of running the program, which toggles two LED groups every **500 milliseconds** using `for` loop and conditional logic inside `loop()`.


**🚀 What I Learned**

= How to use arrays to store pin numbers

= How to write cleaner and smarter code using loops and logic

= Controlling multiple outputs using conditions inside a loop

= Adjusting LED pattern speed using delay()


🙋‍♂️ About Me:
👨‍💻 Project by: Priyansh Singh 📅 Date: July 2025 
## 🌐 Explore More Projects

🚀 **[🔗 Visit My GitHub](https://github.com/priyansh244)** – Check out my other Arduino projects!




