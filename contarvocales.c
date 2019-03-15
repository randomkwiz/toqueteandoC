#include<stdio.h>
/* Programa para contar cuántas vocales tiene un texto */

void main(void) {
    int c,cont=0;
    printf("Escribe un texto y pulsa control-z cuando hayas terminado\n");
    while(EOF != (c=getchar())){
        switch(c){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u': cont++;
        }
    }

printf ("El texto tiene %d vocales\n", cont);
system("pause");
}




