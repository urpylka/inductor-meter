#include <Arduino.h>

void setup()
{
  DDRB |= (1 << DDB6);
}

void loop()
{
  // set PB6 high
  PORTB |= (1 << PORTB6);
  delay(100);

  // set PB6 low
  PORTB &= ~(1 << PORTB6);
  delay(100);
}
