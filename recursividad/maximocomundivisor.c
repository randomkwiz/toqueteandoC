/*
-- Ángela Vázquez Domínguez--
Practicando la recursividad en C

Función MCD.

maximo comun divisor de dos numeros.

*/
#include<stdio.h>

int mcd (int x, int y){

    if (x==0){
        return y;
    }else if (y==0){
        return x;
    }else if (x>=y){
        return mcd(x-y,y);
    }else if (y>x){
        return mcd(x,y-x);
    }

}


void main (void){
    int MCD,a,b;
    printf("Introduce un numero.\n");
    scanf("%d",&a);
    printf("Introduce otro numero.\n");
    scanf("%d",&b);
    MCD=mcd(a,b);
    printf("El maximo comun divisor de %d y %d es %d.\nMCD(%d,%d)= %d",a,b,MCD,a,b,MCD);
}
