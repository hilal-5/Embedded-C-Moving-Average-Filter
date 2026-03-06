# Embedded C - Moving Average Filter

This project implements a moving average filter in **pure C** to smooth out noisy sensor data (e.g., altimeter readings) for embedded systems with highly constrained memory resources.

## 🚀 Architectural Highlights:
* **Pass-by-Reference Architecture:** Utilizes pointer arithmetic instead of array duplication for function parameters, significantly optimizing memory usage.
* **Static Memory Management:** Strictly avoids dynamic memory allocation (`malloc`/`free`) to prevent *Memory Fragmentation*, a critical risk in bare-metal environments.
* **Bare-metal Approach:** Contains zero external dependencies outside the C standard library. Designed to be easily integrated into sensor polling algorithms of UAVs and avionics systems.
