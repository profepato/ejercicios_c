/* 
 * File:   ejercicio_1_4.c (Página 14)
 * 
 * Escriba un programa que imprima la tabla corresondiente
 * Celsius a Fahrenheit
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 17:10
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Imprimer la tabla Fahrenheit-Celsius
 * para fahr = 0, 20, ..., 300; versión de punto flotante
 */

int main(int argc, char** argv) {
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;      // limite superior de la tabla de temperaturas
    upper = 300;    // limite superior
    step = 30;      // tamaño de incremento
    
    fahr = lower;

    printf("------------\n");
    printf(" ºC    ºF\n");
    printf("------------\n");
    while(fahr <= upper){
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("%6.1f %3.0f\n", celsius, fahr);
        fahr = fahr + step;
    }
    
    return (EXIT_SUCCESS);
}

