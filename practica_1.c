#include<stdio.h>



int esPar (int x){
    if(x%2==0){
        return 1;
    } else {
        return 0;
    }


}

int esPrimo (int x){

    int i;
    for(i=2;i<x;i++){
        if (x%i==0){
            return 0;
        } else {
            return 1;
        }
    }

}

void cuadrado (int x){

    int i,j;

    for(i=0;i<x;i++){

        for(j=0;j<x;j++){
            if((i==0) || (i==x-1)){
            printf(" *");
            } else if (j==0 || j == x-1) {
            printf("* ");
            } else {
                printf("  ");
            }

        }
        printf("\n");

    }


}


void triangulo (int x){

    int i,j;

    for(i=0;i<x;i++){

            for(j=0;j<i;j++){
            printf("*");
            }
            printf("\n");
    }

}


void triangulo_dch (int x){

    int i,j;

    for(i=0;i<x;i++){
        for(j=0;j<=x-i;j++){
            printf(" ");
        }
        for(j=0;j<i;j++){
            printf("*");
        }
        printf("\n");

    }



}

main(){

    int n;


printf("Introduce un numero:\n");
scanf("%d",&n);

    if (esPar(n)==1){
        printf("El numero %d es par.\n",n);
    } else if (esPar(n)==0){
        printf("El numero %d es impar.\n",n);
    } else {
        printf("Error.\n");
    }


        if (esPrimo(n)==1){
        printf("El numero %d es primo.\n",n);
    } else if (esPrimo(n)==0){
        printf("El numero %d no es primo.\n",n);
    } else {
        printf("Error.\n");
    }

printf("Cuadrado.\n");
    cuadrado(n);


printf("Triangulo.\n");
    triangulo(n);

    printf("Triangulo alineado a la derecha.\n");
    triangulo_dch(n);

}
