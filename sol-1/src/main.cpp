#include <Arduino.h>

// put function declarations here:
uint16_t myFunction(uint8_t, uint8_t);

uint8_t a, b;
uint16_t result;

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:
  result = myFunction(2, 3);
  Serial.printf("Test Result: %d", result);
  
  a = 0;
  b = 0;

}

void loop() {
  delay(500);
  result = myFunction(a, b);
  Serial.printf("%d + %d = %d", result);
  a += 1;
  b += 2;
}

// put function definitions here:
uint16_t myFunction(uint8_t x, uint8_t y) {
  return x + y;
}