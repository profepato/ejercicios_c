/* 
 * File:   ejercicio_1_5.c (Página 15)
 * 
 * Modifique el programa de conversión de temperaturas de manera que
 * escriba la tabla en orden inverso, esto es, desde 300 grados hasta 0
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 17:13
 */

#include <stdio.h>
#include <stdlib.h>

#define MAX_LIMIT 300
#define INIT 0
#define STEP 20

/*
 * Imprimer la tabla Fahrenheit-Celsius
 * para fahr = 0, 20, ..., 300; versión de punto flotante
 */

int main(int argc, char** argv) {
    float fahr, celsius;

    printf("------------\n");
    printf(" ºC    ºF\n");
    printf("------------\n");

    for(fahr = MAX_LIMIT; fahr >= INIT; fahr = fahr - STEP){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f %3.0f\n", celsius, fahr);
    }

    return (EXIT_SUCCESS);
}

