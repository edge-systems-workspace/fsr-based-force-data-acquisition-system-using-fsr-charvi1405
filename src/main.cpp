#include <Arduino.h>
/**
 * @file main.cpp
 * @brief Embedded Force Measurement System using FSR
 * @author Charvi Mittal
 * @date 2026-01-29
 *
 * @details
 * Reads analog force data from FSR sensor and
 * displays structured output via Serial Monitor.
 */

int fsrPin = A0;
void setup() {
    Serial.begin(9600);
}

void loop() {

    // TODO 5:
    // Read analog value from FSR

    // TODO 6:
    // Print raw ADC value

    // TODO 7:
    // Apply simple threshold logic (e.g., detect pressure)

    // TODO 8:
    // Print pressure detection message

    // TODO 9:
    // Add delay (500ms or 1 second)
}
