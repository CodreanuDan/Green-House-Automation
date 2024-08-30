# 🌱 Greenhouse Automation Project

This project showcases the automation of a greenhouse environment using Proteus Simulation Software and an Arduino Uno microcontroller. The system is designed to maintain optimal conditions for plant growth by monitoring environmental parameters and adjusting them automatically.

## Project Overview

![Sera_Proj_descr](https://github.com/user-attachments/assets/c6618234-5b1a-499e-a357-13aa7b1adacb)

This Greenhouse Automation project involves several key components:
- **Arduino Uno**: The core microcontroller used to control the greenhouse environment.
- **Proteus Simulation Software**: Used for designing and simulating the entire circuit, including the sensor, power circuits, power source, and actuator control circuits.
- **Modular Software Structure**: The software is divided into multiple modules to facilitate easy maintenance and future improvements.

### Features
- **🌡️ Sensor Measurement Module**: Collects data from various sensors (e.g., temperature, humidity, light intensity, soil moisture).
- **📊 Data Display Module**: Visualizes the sensor data in real-time.
- **⚙️ Control Commands Module**: Adjusts environmental parameters such as light, temperature, humidity, and soil moisture.
- **⏳ Simulated Time Module**: Allows quick observation of changes by simulating time progression.
- **🕒 Time-Based Parameter Adjustment**: A hardcoded mechanism (to be externalized into a configuration file in future iterations) that adjusts greenhouse parameters based on the time of day, optimizing plant growth.
- **🔌 Actuators Circuit**: Controls the heating lamp, water pump, lighting, and fan to maintain the desired environmental conditions.

### Technical Details
- **🔌 Power Circuit**: Designed to supply stable power to all components.
- **🌡️ Sensor Circuit**: Configured to accurately monitor environmental conditions, including temperature, humidity, light intensity, and soil moisture.
- **🎛️ Control Panel**: Interface for manual control and monitoring.
- **⚡ Actuators Circuit**: Includes relays and control mechanisms to operate:
  - **Pump**: Ensures proper irrigation based on soil moisture levels.
  - **Light**: Manages lighting conditions for optimal plant growth.
  - **Fan**: Controls air circulation and temperature regulation.
  - **Heating Lamp**: Maintains the required warmth within the greenhouse.

## Project Structure

The project is structured into the following main components:

1. **Hardware Setup**:
   - Power Circuit
   - Sensor Circuit
   - Control Panel
   - Actuators Circuit

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
<img src="data/Sera_proj_ProteusOverview.png" alt="Simulation Overview" width="400">

*Proteus simulation layout showing the connections between the Arduino Uno, sensors, control panel, power source, and actuators.*

### Software Architecture
<img src="https://github.com/user-attachments/assets/ab6f0758-2cf9-4f77-a4b7-0c59ff06a89b" alt="Software Architecture" width="400">

*The modular structure of the software, highlighting the separation of concerns for better maintainability.*

### Project Demonstration
<img src="https://github.com/user-attachments/assets/afef5aca-0d62-452c-a3e0-a8d7d41b31a4" alt="Project Demonstration" width="400">

*A demonstration of the greenhouse automation in action, showing real-time sensor data and control responses.*

### Detailed Component Overview

Here’s a closer look at the key components of the Proteus simulation:

| ![Control Panel](https://github.com/user-attachments/assets/34b003d8-b069-4ecb-aed1-2ed137f9e562) | ![Sensors](https://github.com/user-attachments/assets/ee8dddcf-c5aa-4d24-978a-d5f757c25d8d) |
|:---:|:---:|
| **Control Panel**<br><i>Interface for manual control and monitoring.</i> | **Sensors**<br><i>Temperature, light intensity, soil moisture, and humidity sensors.</i> |

| ![Actuators](https://github.com/user-attachments/assets/7956ac95-a3fd-4718-ae56-2cc4630d8b92) | ![Power Source](https://github.com/user-attachments/assets/de6d21bb-a8aa-4259-be93-86b09d765e58) |
|:---:|:---:|
| **Actuators**<br><i>Control for the pump, light, fan, and heating lamp.</i> | **Power Source**<br><i>Supplies power to the entire setup.</i> |


