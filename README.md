# Sound-Activated LED

LED turns on when a clap or loud noise is detected by a sound sensor.

## Description
A sound sensor module monitors ambient noise levels. When a clap or loud sound exceeds the sensitivity threshold, the LED turns on for 3 seconds then turns off. Demonstrates event-driven output logic and digital input reading from an audio sensor on an Arduino.

## Components
- Arduino Uno
- 1x Sound Sensor Module (HW-484 or similar)
- 1x LED
- 1x 220Ω resistor
- Breadboard + jumper wires

## Wiring
| Component        | Arduino Pin |
|------------------|-------------|
| Sound Sensor DO  | Pin 10      |
| Sound Sensor VCC | 5V          |
| Sound Sensor GND | GND         |
| LED (+)          | Pin 6       |
| LED (-)          | GND via 220Ω resistor |

## Note
The sound sensor has a small potentiometer on board. Adjust it with a screwdriver to tune sensitivity — too high and background noise triggers it, too low and it won't trigger at all.

## Skills Demonstrated
- Digital input reading from an audio sensor
- Event-driven LED output
- Hardware sensitivity tuning
