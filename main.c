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

#define ENTRADA     1
#define SAIDA       0
#define ABERTO      0
#define FECHADO     1

void main(void) 
{ 
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
                if ( s0() == 1)
                estado = 1;
                break;
        }       
        
    }
}
