/*
-- Ángela Vázquez Domínguez--
Practicando la recursividad en C

Función factorial.
*/

#include<stdio.h>

int factorial (int x){
    int fact, i;
    if (x==0){
        fact=1;
    } else if (x>0){
    fact=x*(factorial(x-1));
    }
return fact;
}

void main (void){
    int n,f;
    printf("Introduce un numero para saber su factorial.\n");
    scanf("%d",&n);
    f=factorial(n);

    printf("El factorial de %d es %d.\n",n,f);
    printf("%d!= %d.\n",n,f);



}
