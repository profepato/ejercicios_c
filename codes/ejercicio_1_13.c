/* 
 * File:   ejercicio_1_13.c (Página 25)
 * 
 * Escriba un programa que imprima el histograma 
 * de las longitudes de las palabras de su entrada. Es
 * fácil dibujar el histograma con las barras horizontales;
 * la orientación vertical es un reto mas interesante.
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 18:26
 */

#include <stdio.h>
#include <stdlib.h>

// horizontal
int main(int argc, char** argv) {
    int c;
    int contLetras = 0;
    
    while((c = getchar()) != EOF){
        if(c != ' ' && c != '\n'){
            //putchar(c);
            contLetras++;
        }else {
            //printf(" --> %d letras \n", contLetras);
            int i;
            for(i = 0 ; i < contLetras ; i++){
                printf("#");
            }
            printf("\n");
            contLetras = 0;
        }
    }

    printf("\n");
    return (EXIT_SUCCESS);
}

