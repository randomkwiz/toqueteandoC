#include<stdio.h>


void factorial (int x){

    int fact=1;
    int i;
    for(i=1;i<=x;i++){
    fact=fact*i;
    }
    printf("El factorial de %d es %d", x, fact);
}



void main (void){

    int numero;
    printf("Introduce un numero.\n");
    scanf("%d",&numero);
    factorial(numero);

}
