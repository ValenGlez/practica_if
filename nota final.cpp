/*
[]Pedir al usuario que ingrese una variable float como "notafinal".
[]Mostrar a el usuario si su nota es aprobada o no (>6 aprobado, <6 desaprobado).
*/


#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
int main () {

    float notafinal;
    printf("Ingrese su nota final: ");
    scanf ("%f",&notafinal);

        if (notafinal < 6 && notafinal > 0){
        printf ("Usted a desaprobado la materia.\n");
        }

        else if (notafinal > 6 && notafinal < 11) {
        printf ("Usted a aprobado la materia.\n");
        }
        else if (notafinal > 10){
        printf ("La nota que ingreso es imposible de obtener, reinicie el programa y brinde un numero valido.\n");
        }


return 0;
}
