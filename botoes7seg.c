/*
 * File:   botoes.c
 * Author: 21192692
 *
 * Created on 26 de Fevereiro de 2021, 14:50
 */


#include <xc.h>
#define  adc     PORTDbits.RD2
#define  sub     PORTDbits.RD3 

void botoes_initi (void) 
{
    TRISDbits.TRISD2 = 1;  // init
    TRISDbits.TRISD3 = 1;  // init
    PORTDbits.RD2 = 0;
    PORTDbits.RD3 = 0;
}

char adicionar (void)
{
    return(adc);
}

char subtrair (void)
{
    return(sub);
}