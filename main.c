/*
 * File:   main.c
 * Author: 21192692
 *
 * Created on 29 de Janeiro de 2021, 15:13
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "contatores.h"
#include "botoes.h"
#include "botoes7seg.h"
#include "disp7seg.h"



void main(void) 
{ 
    d7seg.init();
    signed char cont = 0;
    int estado = 0;
    int t;  
    while (1)
    {
        switch( estado) 
        {
            case 0: 
                
                estado = 1;
                break;
                
            case 1: 
                contatores_init ();
                botoes_init ();
                estado = 2;
                break;
                
            case 2:
                if (s1 () == 1)
                estado = 3;
                break;
             
            case 3:    
                k1(1);
                k2(1);
                t = 3000;
                estado = 4;
                break;
                
            case 4:
                delay (1);
                --t;        
                if ( t <= 0)
                    estado = 5;
                break;
            
            case 5: 
                k2(0);
                k3(1);               
                 ++cont;
                if(cont >= 15)
                    cont = 0;               
                estado = 1;
                break;
                ;
            case 6:
                if (s0 () ==1)
                    estado = 1;
                        
        }       
        
        d7seg.print(cont);
    }
}
