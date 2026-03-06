#ifndef TIMER0_PRIVATE_H
#define TIMER0_PRIVATE_H

#define TCCR0   *((volatile unsigned char*)0x53)
#define TCNT0   *((volatile unsigned char*)0x52)
#define TIMSK   *((volatile unsigned char*)0x59)

#define TOIE0   0
#define CS00    0
#define CS01    1
#define CS02    2

#endif