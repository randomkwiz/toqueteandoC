//Cuenta espacios, tabulaciones y nuevas lineas
//Angela Vazquez Dominguez
#include<stdio.h>

void main (void) {
int a, linea,tab,espacio;
a = 0;
linea = 0;
tab = 0;
espacio = 0;
printf("Escribe aqui un texto y luego pulsa control-z.\n");
    while( EOF != (a=getchar( ))){
    switch(a){
    case ' ':
        ++espacio;
        break;
    case '\n':
        ++linea;
        break;
    case '\t':
        ++tab;
        break;

    }
}
printf("En este documento hay:\n%d\tlineas\n%d\ttabulaciones\n%d\tespacios en blanco\n",linea,tab,espacio);
 system("pause");
}
