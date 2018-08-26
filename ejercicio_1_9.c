/* 
 * File:   ejercicio_1_9.c (Página 21)
 * 
 * Escriba un programa que copie su entrada a la salida,
 * reemplazando cada cadena de uno o más blancos por un 
 * solo blanco
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 18:07
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int c;
    int cont = 0;
    
    while((c = getchar()) != EOF){
        if(c != ' '){
            putchar(c);
            cont = 0;
        }else if(cont == 0){
            putchar(c);
            cont = 1;
        }
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

