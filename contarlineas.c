//Programa para contar lineas - Ángela Vázquez Domínguez
#include<stdio.h>

void main (void) {
int a, nuevalinea;
nuevalinea = 0;
printf("Escribe aqui un texto y luego pulsa control-z. El programa contara el numero de lineas:\n");
while ((a=getchar()) != EOF) {
    if (a=='\n')
        ++nuevalinea;
}
printf("En este documento hay %d lineas\n",nuevalinea);
 system("pause");
}
