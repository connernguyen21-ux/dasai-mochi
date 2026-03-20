#  Dasai Mochi — Interactive Embedded Display Device

##  Overview

Dasai Mochi is a compact embedded system inspired by expressive desk companions. It features a small OLED display and interactive inputs to create dynamic visual feedback and animations. The device is designed to be portable, customizable, and engaging, making it a fun and technically rich personal project.

---

##  Features

*  OLED display for animations and expressions
*  Button-based user interaction
*  Battery-powered portable design
*  Powered by ESP32 for performance and flexibility
*  Customizable visuals and behaviors

---

##  System Architecture

* **Display Module** — Handles rendering graphics on OLED
* **Input Module** — Processes button interactions
* **Control Logic** — Manages states, animations, and behavior
* **Power System** — Supports battery operation with charging module

---

##  Hardware Components

* ESP32-S3 DevKit
* 0.96" SSD1306 OLED Display (I2C)
* Push Buttons (tactile switches)
* 18650 Battery
* LiPo Rider (charging & power management)
* Breadboard / PCB (future)

---

##  How It Works

1. The ESP32 initializes the OLED display and input controls.
2. User input (button presses) changes the displayed animation or state.
3. The system runs lightweight animation loops for responsive visuals.
4. The device operates independently using battery power.

---

##  File Structure

```
/src
    bitmap.cpp / bitmap.h
    config.cpp / config.h
    draw.cpp / draw.h
    setup.cpp / setup.h
main.cpp
```

---

##  Future Improvements

* Touch or gesture input
* Bluetooth connectivity (mobile control)
* Sound feedback (buzzer/speaker)
* Custom 3D-printed enclosure
* Expanded animation library

---

##  Applications

* Desk comp anion device
* Embedded UI experimentation
* Portfolio project for embedded/firmware roles
* Human-computer interaction prototyping

---

##  Inspiration

Inspired by expressive digital companions and minimal embedded UI systems.

---
