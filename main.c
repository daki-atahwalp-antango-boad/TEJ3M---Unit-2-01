// Created by :Daki Anrango-Boada
// Created on: February 11, 2025
// This program tells an arduino to “blink” its LED on and off every second 

void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
  // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, HIGH);
  delay(1000); 
  // Wait for 1000 millisecond(s)
  digitalWrite(LED_BUILTIN, LOW);
  delay(1000); 
}
