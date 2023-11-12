#include <avr/io.h>
#include <util/delay.h>

#define blnk_delay 100

int main (void){
  DDRB = 0b00111111;
  DDRD = 0b11111100;

  while (1){
    PORTB = 0b00000000;
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);
    
    PORTB = 0b00100000;//1
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);
    
    PORTB = 0b00110000;//2
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);
    
    PORTB = 0b00111000;//3
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111100;//4
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111110;//5
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111111;//6
    PORTD = 0b00100000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111111;//7
    PORTD = 0b10110000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111111;//8
    PORTD = 0b11011000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111101;//9
    PORTD = 0b11001100;
    _delay_ms(blnk_delay);

    PORTB = 0b00111100;//10
    PORTD = 0b11000100;
    _delay_ms(blnk_delay);

    PORTB = 0b00111100;//11
    PORTD = 0b01000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00111100;//12
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00011100;//13
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00001100;//14
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);

    PORTB = 0b00000100;//15
    PORTD = 0b00000000;
    _delay_ms(blnk_delay);
  }
  return 0;
}