# An-Arduino-Sound-Sensor-LED

LED arms on proximity and turns on when a clap or sound is detected.

## Description
An upgraded version of the ultrasonic sensor LED project. An HC-SR04 ultrasonic sensor detects when an object comes within 20cm, arming the system. A sound sensor module then listens for a clap or loud noise to trigger the LED on for 3 seconds. If no sound is detected within 5 seconds the system disarms automatically.

## Components
- Arduino Uno
- 1x HC-SR04 Ultrasonic Sensor
- 1x Sound Sensor Module (KY-038 or similar)
- 1x LED
- 1x 220Ω resistor
- Breadboard + jumper wires

## Wiring
| Component        | Arduino Pin |
|------------------|-------------|
| HC-SR04 Trig     | Pin 9       |
| HC-SR04 Echo     | Pin 10      |
| HC-SR04 VCC      | 5V          |
| HC-SR04 GND      | GND         |
| Sound Sensor OUT | Pin 7       |
| Sound Sensor VCC | 5V          |
| Sound Sensor GND | GND         |
| LED (+)          | Pin 6       |
| LED (-)          | GND via 220Ω resistor |

## How It Works
1. Proximity sensor detects object within 20cm → system arms
2. Sound sensor listens for a clap or loud noise
3. Sound detected → LED turns on for 3 seconds → turns off
4. No sound within 5 seconds → system disarms automatically

## Adjustable Parameters
| Variable          | Default | Description                         |
|-------------------|---------|-------------------------------------|
| `triggerDistance` | 20cm    | Distance to arm the system          |
| `holdTime`        | 3000ms  | How long the LED stays on           |
| `listenWindow`    | 5000ms  | How long to listen before disarming |

## Note
The sound sensor module has a small potentiometer on board. Adjust it with a screwdriver to tune sensitivity for your environment.

## Skills Demonstrated
- Multi-sensor input handling
- Armed/disarmed state logic
- Timeout logic with `millis()`
- Sensor-triggered LED output
- Modular, reusable code structure
