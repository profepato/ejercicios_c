/* 
 * File:   ejercicio_1_6.c (Página 18)
 * 
 * Verifique que la expresión getchar() != EOF es 0 o 1
 * 
 * Author: prez
 *
 * Created on 26 de agosto de 2018, 17:13
 */

#include <stdio.h>
#include <stdlib.h>
// EOF es una constante que vale -1

int main(int argc, char** argv) {
    int c;

    // si la letra obtenida es distinto de -1
    while((c = getchar()) != EOF){
        //putchar(c);
        printf("%c --> EOF --> %d\n", c, EOF);
    }

    // acá la letra es -1
    printf("FUERA DEL CICLO, c=%d\n", c);
    return (EXIT_SUCCESS);
}

