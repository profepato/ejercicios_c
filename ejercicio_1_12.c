/* 
 * File:   ejercicio_1_12.c (Página 23)
 * 
 * Escriba un programa que imprima su entrada una 
 * palabra por línea
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 18:24
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int c;
    
    while((c = getchar()) != EOF){
        if(c != ' '){
            putchar(c);
        }else{
            putchar('\n');
        }
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

