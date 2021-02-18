/*
 * File:   botoes.c
 * Author: 21192692
 *
 * Created on 18 de Fevereiro de 2021, 16:48
 */


#include <xc.h>
#define S0          PORTDbits.RD1
#define S1          PORTDbits.RD0

void botoes_init (void) 
{
    TRISDbits.TRISD0 = 1;  // init
    TRISDbits.TRISD1 = 1;  // init
    PORTDbits.RD0 = 0;
    PORTDbits.RD1 = 0;
}

int s1(void)
{
    return (S1);
}

int s0(void)
{
    return (S0);
}