#include<stdio.h>

void piramide(int x){
    int i,j;

    for(i=1;i<=x;i++){
        for(j=1;j<=x-1;j++){
            printf(" ");
        }
        for(j=1;j<=2*i-1;j++){
            printf("*");
        }
    printf("\n");
    }


}



void main(void){

int x=5;

    piramide(x);



}
