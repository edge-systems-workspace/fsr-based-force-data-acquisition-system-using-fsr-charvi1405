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
int threshold = 300;
void setup() {
    Serial.begin(9600);
}

void loop() {
    int fsrValue = analogRead(fsrPin);
    Serial.println(fsrValue);
    if (fsrValue > threshold) {
        Serial.println("Pressure Detected!");
    }



}
