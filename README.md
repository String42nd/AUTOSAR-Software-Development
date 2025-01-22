# AUTOSAR-Software-Development
 AUTOSAR software development practices I worked on, some snippets I created.

## **Overview**
This document provides an overview of my work and learning outcomes from the AUTOSAR course, focusing on the development of various components in the AUTOSAR architecture. The course emphasized hands-on implementation of both ARXML configuration and C file development, showcasing how to design scalable, modular, and hardware-independent automotive software.

---

## **Course Highlights**

### **1. ECU Abstraction Layer Development**
- **Objective:** Develop the ECU abstraction layer to bridge hardware and higher-level software components.
- **Key Activities:**
  - Created ARXML configurations for defining ports and runnables.
  - Implemented temperature sensor and motor control logic in the C file.
  - Used standardized MCAL APIs such as `Adc_StartGroupConversion` and `Dio_WriteChannel` to interact with hardware.
- **Outcome:** Built a functional abstraction layer enabling reusable and hardware-independent software design.

### **2. Application Software Component (ASW) Development**
- **Objective:** Develop the ASW to interact with the ECU abstraction layer and implement application-level logic.
- **Key Activities:**
  - Merged application and sensor-actuator logic into a single component for simplicity.
  - Configured receiver ports and synchronized server call points in the ARXML.
  - Implemented decision logic in C to control the cooling fan based on temperature thresholds using RTE APIs (`Rte_Read` and `Rte_Call`).
- **Outcome:** Created a robust ASW that seamlessly integrates with the ECU abstraction layer for efficient data processing and hardware control.

---

## **Key Learning Outcomes**
- **AUTOSAR Architecture:** Gained in-depth understanding of the layered architecture, including the Microcontroller Abstraction Layer (MCAL), ECU Abstraction Layer, and Application Layer.
- **ARXML Configuration:** Learned how to define ports, runnables, and internal behaviors in ARXML files, ensuring adherence to AUTOSAR standards.
- **C File Development:** Acquired skills in implementing AUTOSAR-compliant software components, leveraging RTE APIs and standardized interfaces.
- **Abstraction Principles:** Understood how abstraction layers simplify software development, enhance reusability, and ensure hardware independence.
- **Debugging and Validation:** Validated ARXML configurations and C files for compliance with AUTOSAR standards, ensuring error-free integration.

---

## **Technologies and Tools Used**
- **Languages:** C
- **Tools:**
  - Notepad++ for C file development.
  - XML Spy for ARXML configuration.
  - AUTOSAR-compliant APIs for MCAL and RTE integration.

---

## **Conclusion**
This course provided a comprehensive learning experience in AUTOSAR development, focusing on creating modular, scalable, and hardware-agnostic automotive software components. The hands-on exercises bridged theoretical concepts with practical implementation, preparing me for real-world AUTOSAR projects.

---

For further details, feel free to reach out!

