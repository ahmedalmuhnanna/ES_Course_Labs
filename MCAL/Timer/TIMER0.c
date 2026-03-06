#include "TIMER0_interface.h"

static void (*Global_CallBack)(void) = 0;

void TIMER0_Init(void)
{
    OPTION_REG = 0b00000111;   
    TMR0 = 0;

    INTCON.T0IE = 1;   
    INTCON.GIE  = 1;   
}

void TIMER0_Start(void)
{
    TMR0 = 0;
}

void TIMER0_SetCallBack(void (*ptr)(void))
{
    Global_CallBack = ptr;
}

void interrupt()
{
    if(INTCON.T0IF)
    {
        INTCON.T0IF = 0;   

        if(Global_CallBack != 0)
        {
            Global_CallBack();
        }
    }
}