# -IOT-device-Temperature-and-Humidity-Detector-and-Providing-Alert-
INTRODUCTION

The project aimed to create an integrated system utilizing the MSP430G2553 microcontroller to control  various peripheral devices such as LCD, LED, register,
DHT11 temperature and humidity sensor, and  buzzer.  

 2 Hardware Components
 • MSP430 Microcontroller
 • LCD Display
 • DHT11 Sensor
 • Buzzer
 • LED
 • Resistors
 • Breadboard
 • Connecting wires
 3 Software Used
 • Github
 • CCS
 4 Functionality
 4.1 DHT Sensor
 • Measures temperature and humidity.
 • Sends temperature data to the MSP430 microcontroller.
 • Fig2
 1
Figure 1: Calibration
 4.1.1 Calibration
 • Calibration Procedure– Baseline Measurements: Initially, the DHT11 sensor was installed in a controlled envi
ronmental chamber along with the calibrated thermometer and hygrometer. The chamber
 was set to a reference temperature and humidity level.– Data Collection: Data from the DHT11 sensor, calibrated thermometer, and hygrometer
 were simultaneously logged over a specified period. Readings were taken at regular intervals
 to capture any fluctuations.– Comparison Analysis: The readings obtained from the DHT11 sensor were compared
 with those of the calibrated instruments. Any discrepancies or systematic errors were noted.– Offset Correction: If consistent discrepancies were observed, offset corrections were ap
plied to the DHT11 readings to align them with the calibrated instruments.– Validation: After applying offset corrections, the sensor was retested in the same environ
mental conditions to validate the effectiveness of the adjustments.
 • Temperature Calibration: In the Fig 1 the DHT11 sensor exhibited a consistent deviation of
 approximately +1.5°C compared to the calibrated thermometer. Offset correction was applied
 to adjust the temperature readings accordingly.
 • Humidity Calibration: The DHT11 sensor showed a deviation of approximately-3 RH (Rel
ative Humidity) compared to the calibrated hygrometer. Offset correction was applied to align
 the humidity readings with the calibrated instrument.
 4.2 MSP430 Microcontroller
 • Receives distance and temperature data from sensors.
 • Processes data to determine obstacle presence and temperature.
 2
Figure 2: Temprature and Humidity
 3
• Controls LCD to display obstacle distance and temperature.
 • Activates LED and buzzer for obstacle and temperature alerts.
 4.3 LCD Display
 • Shows obstacle distance and temperature readings.
 • Provides a clear interface for users to view sensor data.
 4.4 LED Indicator
 • Lights up when an obstacle is detected.
 • Can be used as a visual alert for the user.
 4.5 Buzzer
 • Emits sound when an obstacle is detected or when the temperature exceeds a threshold.
 • Provides an audible alert for the user.
 5 Usage
 1. Connect the components as per the circuit diagram.
 2. Power on the system.
 3. The DHT sensor measures the temperature.
 4. The MSP430 microcontroller processes the sensor data.
 5. The LCD displays obstacle distance and temperature readings.
 6. If an obstacle is detected, the LED lights up and the buzzer emits a sound.
 7. If the temperature exceeds a certain threshold, the buzzer emits a sound.
  Conclusion
 The project successfully demonstrated the integration of the MSP430G2553 microcontroller with multi
ple peripheral devices including LCD, LED, register, DHT11 sensor, and buzzer. The system exhibited
 efficient control, accurate sensor data acquisition, and reliable operation. Future enhancements could
 include additional features, optimization of code, and integration with other sensors or actuators.
 8 References
 • MSP430G2553 Datasheet
 • DHT11 Sensor Documentation
 • LCD Module Specification
 • Buzzer Datasheet
