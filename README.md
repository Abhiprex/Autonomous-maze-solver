An autonomous maze-solving robot built as our final year B.Tech project at MIT ADT University. It uses an Arduino UNO and three ultrasonic sensors to navigate a 4x4 grid maze, map it, and find the shortest path.

## How it works:
1. **First Run (Exploration):** The robot uses a Left/Right Wall-Following rule to explore the unknown maze layout. While driving, it tracks the walls using the sensors and saves the layout cell-by-cell into its memory.
2. **Second Run (Shortest Path):** It processes the stored map data using the Flood-Fill algorithm to calculate the absolute shortest path to the center, completely skipping dead ends.

## Hardware Setup:
- **Microcontroller:** Arduino UNO (ATmega328P)
- **Motor Driver:** L298 Dual H-Bridge
- **Sensors:** 3x HC-SR04 Ultrasonic Sensors (Left, Center, Right)
- **Power:** 4x AA batteries for the motors + 9V battery for the Arduino logic

## Project Group (ECO2425UGP-03):
- Abhijeet Patil (MITU21BTEC0001)
- Mahesh Khune (MITU21BTEC0024)
- Mihir Manere (MITU21BTEC0026)
- Atharva Jagtap (MITU21BTEC0011)
- **Guided by:** Prof. Rupali Ithape
- **Published in:** International Journal of Creative Research Thoughts (IJCRT), December 2024
