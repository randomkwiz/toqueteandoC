/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ

LENGUAJE C.

CUADRADO.


*/


#include<stdio.h>

void pintarLineas(int n){

    int i;
    for(i=0;i<n;i++){
        printf("1 ");

    }


}

void pintarCuerpo(int n){
    int i,j,x;
    for(j=2;j<n-2;j++){
            printf("2 ");
            for(x=1;x<n-2;x++){
                printf("3 ");
            }
            printf("4 ");
         printf("\n");
    }


}

void main (void){

    int n=10;

    pintarLineas(n);
    pintarCuerpo(n);
    pintarLineas(n);

}
