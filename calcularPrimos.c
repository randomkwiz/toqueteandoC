/*

---ÁNGELA VÁZQUEZ DOMÍNGUEZ ---


CREAR FUNCION NUMEROS PRIMOS HASTA X NUMERO


*/

#include<stdio.h>

int esPrimo (int a){
    int i,c;
    int res = 0;
    for (i=2; i<a; i++ ){
       c= a%i;
        if (c == 0){
            res =1;
            //No es primo
        }
    }


return res;
}


void main (void){
    int i;
    int n;
    printf("Dime un numero. Te dire los numeros primos que hay desde el 1 hasta ese numero.\n");
    scanf("%d",&n);

printf("Los numeros primos hasta el numero %d son: ",n);
    for (i=2; i<n; i++){
        if (esPrimo(i)==0){
            printf("\n%d\n",i);
        }
    }


}
