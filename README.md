# Autonomous Maze-Solving Micromouse Robot 🤖🧩

An autonomous maze-solving micromouse robot built using Arduino UNO and ultrasonic sensors. The robot navigates a $4 \times 4$ grid maze, maps its layout, and computes the shortest path to the goal using the **Flood-Fill algorithm**.

---

## 🌟 Highlights & Features

* **Exploration Phase:** Utilizes a Wall-Following algorithm (Left/Right wall hugging) to explore unknown maze layouts cell-by-cell.
* **Shortest Path Optimization:** Implements the **Flood-Fill algorithm** to analyze stored grid data, eliminate dead ends, and compute the optimal trajectory to the center.
* **Multi-Sensor Array:** Uses three HC-SR04 ultrasonic sensors (Left, Center, Right) for obstacle detection and distance mapping.
* **Academic Publication:** Research published in the *International Journal of Creative Research Thoughts (IJCRT)*, December 2024.

---

## ⚙️ How It Works

1. **First Run (Exploration & Mapping):**
   * The robot navigates through the unexplored maze using real-time ultrasonic sensor feedback.
   * As it moves through the grid, it tracks wall boundaries and logs cell coordinates in system memory.

2. **Second Run (Shortest Path Execution):**
   * The control code processes the generated maze matrix using the **Flood-Fill algorithm**.
   * It calculates the shortest path from the start cell to the goal, bypassing all dead ends and unnecessary loops explored during the first pass.

---

## 🛠️ Hardware Specifications

| Component | Description / Specification |
| :--- | :--- |
| **Microcontroller** | Arduino UNO (ATmega328P) |
| **Motor Driver** | L298N Dual H-Bridge Motor Driver |
| **Sensors** | 3x HC-SR04 Ultrasonic Distance Sensors (Left, Center, Right) |
| **Motors** | Dual DC Geared Motors with wheels |
| **Power Supply (Logic)** | 9V DC Battery |
| **Power Supply (Motors)** | 4x AA Batteries (6V DC) |

---

## 📂 Repository Structure

Autonomous-maze-solver/
│
├── maze_solver.c    # Main C/C++ control code (sensor readings, maze matrix, Flood-Fill)
└── README.md        # Comprehensive project documentation

---

## 📄 Publication & Citation

* **Project Group ID:** `ECO2425UGP-03`
* **Institution:** MIT School of Engineering, MIT ADT University
* **Publication:** *International Journal of Creative Research Thoughts (IJCRT)*, December 2024
