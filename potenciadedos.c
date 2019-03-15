/*

--ÁNGELA VÁZQUEZ DOMÍNGUEZ --
EJERCICIOS DE REPASO PARA EL EXAMEN DE HLC

Dado un numero, saber si es potencia de 2.


*/


#include<stdio.h>

/*
int esPar(int a){
    int res = 0;
    if ( a % 2 ==0){
        res = 1;
    }
return res;
}
*/

//Esta es la versión mejorada de roberto:
int esPar(int a){
    int res = 0;
    res = (a%2==0);

return res;
}
//Fin de la version mejorada

int potenciaDos (int x){
    int res = 0;

    if (x == 2) {
        res = 1;
    } else if ( esPar (x) && potenciaDos(x/2)) {
        res = 1;
    }


return res;
}


void main (void){

    int n;

    printf("Dame un numero: \n");
    scanf("%d",&n);

    if (potenciaDos(n) == 1){
        printf("Sí es potencia de dos\n");

    } else {
        printf("No es potencia de dos\n");
    }


}


