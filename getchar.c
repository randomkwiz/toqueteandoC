#include<stdio.h>
/* Programa para contar cuántos espacios tiene un texto */

void main(void) {
    int c,a,e,i,o,u;
    a = 0;
    e = 0;
    i = 0;
    o = 0;
    u = 0;


    printf("Escribe un texto y pulsa control-z cuando hayas terminado\n");
    while(EOF != (c=getchar())){
        switch(c){
            case 'a':
                a++;
                break;
            case 'e':
                e++;
                break;
            case 'i':
                i++;
                break;
            case 'o':
                o++;
                break;
            case 'u':
                u++;
                break;
        }
    }

printf ("\nEl texto tiene\n \n%d\t'a'\n%d\t'e'\n%d\t'i'\n%d\t'o'\n%d\t'u'\n", a,e,i,o,u);
system("pause");
}




