#ifndef TIMER0_INTERFACE_H
#define TIMER0_INTERFACE_H

void TIMER0_Init(void);
void TIMER0_Start(void);
void TIMER0_SetCallBack(void (*ptr)(void));

#endif