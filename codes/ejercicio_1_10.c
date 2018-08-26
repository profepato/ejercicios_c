/* 
 * File:   ejercicio_1_10.c (Página 21)
 * 
 * Escriba un programa que copie su entrada a la salida,
 * reemplazando cada tabulación por \t, cada retroceso por \b
 * y cada diagonal invertida por \\. Esto hace que las tabulaciones
 * y los espacios sean visibles sin confusiones. (NO LO ENTENDÍ)
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 18:14
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
    int c;
    int cont = 0;
    
    while((c = getchar()) != EOF){
        if(c == '\t'){
            printf("\\t");
        }else if(c == '\b'){
            printf("\\b");
        }else if(c == '\\'){
            printf("\\\\");
        }else{
            putchar(c);
        }
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

