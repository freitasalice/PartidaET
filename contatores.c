/*
 * File:   contatores.c
 * Author: 21192692
 *
 * Created on 18 de Fevereiro de 2021, 15:35
 */


#include <xc.h>

void contatores_init (void) 
{
    TRISDbits.TRISD5 = 0;  // out 
    TRISDbits.TRISD6 = 0;  // out
    TRISDbits.TRISD7 = 0;  // out
    PORTDbits.RD5 = 0;
    PORTDbits.RD6 = 0;
    PORTDbits.RD7 = 0;    
}

void k1 (int liga_desliga)
{
    PORTDbits.RD7 = liga_desliga;
    
}

void k2 (int liga_desliga)
{
    PORTDbits.RD6 = liga_desliga;
}

void k3 (int liga_desliga)
{
    PORTDbits.RD5 = liga_desliga;
}

void k1k2k3 (int liga_desliga)
{
    PORTDbits.RD7 = liga_desliga;
    PORTDbits.RD6 = liga_desliga;
    PORTDbits.RD5 = liga_desliga;
}