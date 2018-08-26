/* 
 * File:   ejercicio_1_14.c (Página 25)
 * 
 * Escriba un programa que imprima el 
 * histograma de las frecuencias con que se 
 * presentan diferentes caracteres leidos a la entrada
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 19:07
 */

#include <stdio.h>
#include <stdlib.h>

#define CANT_LETRAS 5
#define LETRA_A 0
#define LETRA_E 1
#define LETRA_I 2
#define LETRA_O 3
#define LETRA_U 4

int main(int argc, char** argv) {
    int c;
    int conts[CANT_LETRAS]; // contadores para las letras

    int i;
    for(i=0; i<CANT_LETRAS; i++)
        conts[i] = 0;
    
    
    while((c = getchar()) != EOF){
        if(c == 'a' || c == 'A')        conts[LETRA_A]++;
        else if(c == 'e' || c == 'E')   conts[LETRA_E]++;
        else if(c == 'i' || c == 'I')   conts[LETRA_I]++;
        else if(c == 'o' || c == 'O')   conts[LETRA_O]++;
        else if(c == 'u' || c == 'U')   conts[LETRA_U]++;
        else if(c == '\n'){
            for(i=0; i<CANT_LETRAS; i++){
                char letra;

                switch(i){
                    case 0: letra = 'a'; break;
                    case 1: letra = 'e'; break;
                    case 2: letra = 'i'; break;
                    case 3: letra = 'o'; break;
                    default: letra = 'u';
                }

                printf("%c) ", letra);

                int j;
                for(j=0; j < conts[i]; j++)
                    printf("#");
                
                printf("\n");
            }

            for(i=0; i<CANT_LETRAS; i++)
                conts[i] = 0;
            
        }
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

