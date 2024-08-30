# 🌱 Greenhouse Automation Project

This project showcases the automation of a greenhouse environment using Proteus Simulation Software and an Arduino Uno microcontroller. The system is designed to maintain optimal conditions for plant growth by monitoring environmental parameters and adjusting them automatically.

## Project Overview

![Sera_Proj_descr](https://github.com/user-attachments/assets/c6618234-5b1a-499e-a357-13aa7b1adacb)

This Greenhouse Automation project involves several key components:
- **Arduino Uno**: The core microcontroller used to control the greenhouse environment.
- **Proteus Simulation Software**: Used for designing and simulating the entire circuit, including the sensor, power circuits, and power source.
- **Modular Software Structure**: The software is divided into multiple modules to facilitate easy maintenance and future improvements.

### Features
- **🌡️ Sensor Measurement Module**: Collects data from various sensors (e.g., temperature, humidity, light intensity).
- **📊 Data Display Module**: Visualizes the sensor data in real-time.
- **⚙️ Control Commands Module**: Adjusts environmental parameters such as light, temperature, and humidity.
- **⏳ Simulated Time Module**: Allows quick observation of changes by simulating time progression.
- **🕒 Time-Based Parameter Adjustment**: A hardcoded mechanism (to be externalized into a configuration file in future iterations) that adjusts greenhouse parameters based on the time of day, optimizing plant growth.

### Technical Details
- **🔌 Power Circuit**: Designed to supply stable power to all components.
- **🌡️ Sensor Circuit**: Configured to accurately monitor environmental conditions, including temperature, humidity, and light intensity.
- **🎛️ Control Panel**: Interface for manual control and monitoring.
- **🔋 Power Source**: Provides the necessary power for the entire setup, ensuring reliable operation.

## Project Structure

The project is structured into the following main components:

1. **Hardware Setup**:
   - Power Circuit
   - Sensor Circuit
   - Control Panel
   - Power Source

2. **Software Modules**:
   - **Sensor Measurement**: Collects data from sensors and processes it.
   - **Display Data**: Displays the processed data on the screen.
   - **Control Commands**: Manages the greenhouse environment based on sensor input.
   - **Simulated Time**: Accelerates the time to observe changes quickly.

3. **Future Enhancements**:
   - Externalize the hardcoded time-based adjustment mechanism into a configuration file.
   - Improve sensor accuracy and control algorithms.

## Visual Overview

### Simulation Overview
<img src="https://github.com/user-attachments/assets/27ceed5f-c673-4ff0-8172-1209e7fddd8f" alt="Simulation Overview" width="400">

*Proteus simulation layout showing the connections between the Arduino Uno, sensors, and control panel.*

### Software Architecture
<img src="https://github.com/user-attachments/assets/ab6f0758-2cf9-4f77-a4b7-0c59ff06a89b" alt="Software Architecture" width="400">

*The modular structure of the software, highlighting the separation of concerns for better maintainability.*

### Project Demonstration
<img src="https://github.com/user-attachments/assets/afef5aca-0d62-452c-a3e0-a8d7d41b31a4" alt="Project Demonstration" width="400">

*A demonstration of the greenhouse automation in action, showing real-time sensor data and control responses.*




