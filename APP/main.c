#include "../MCAL/Timer/TIMER0_interface.h"

#define LED PORTB.B0

unsigned int counter = 0;

void APP_LED_Task()
{
    counter++;

    if(counter >= 61)   
    {
        LED = !LED;
        counter = 0;
    }
}
void APP_LED_Task(void);

void main()
{
    TRISB.B0 = 0;   
    PORTB.B0 = 0;

    TIMER0_Init();
    TIMER0_SetCallBack(APP_LED_Task);
    TIMER0_Start();

    while(1)
    {
        // No delay here
    }
}