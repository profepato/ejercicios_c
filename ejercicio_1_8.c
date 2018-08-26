/* 
 * File:   ejercicio_1_8.c (Página 21)
 * 
 * Escriba un programa que cuente espacios en blanco,
 * tabuladores y nuevas líneas
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 18:01
 */

#include <stdio.h>
#include <stdlib.h>
// EOF es una constante que vale -1

int main(int argc, char** argv) {
    int c;
    int contEspacios = 0;
    int contTab = 0;
    int contNuevasLineas = 0;

    while((c = getchar()) != EOF){
        if(c == '\n'){
            contNuevasLineas++;
        }else if(c == '\t'){
            contTab++;
        }else if(c == ' '){
            contEspacios++;
        }
    }

    printf("Espacios en blanco: %d\n", contEspacios);
    printf("Tabuladores: %d\n", contTab);
    printf("Nuevas líneas: %d\n", contNuevasLineas);

    printf("\n");
    return (EXIT_SUCCESS);
}

