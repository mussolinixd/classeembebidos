#include <avr/io.h>
void initialize(void);

void main(void)
{
    /* Initialization */
    initialize();

    /* Main loop */
    while (1U) 
    {     if(PORTB==0x02)(
          PORTB=0x01;
          else
        PORTB=0x02;
    )else{
        PORTB=0x00;
    }
}

void initialize(void)
{
    // PC    76543210 
    _SFR_IO8(0x04) = 0x02; 

}