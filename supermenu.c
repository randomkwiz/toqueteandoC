/*

--ÁNGELA VÁZQUEZ DOMÍNGUEZ--

*/

#include<stdio.h>

int esPrimo (int a){
    int i,c;
    int res = 1;
    for (i=2; i<a; i++ ){
       c= a%i;
        if (c == 0){
            res =0;
            //No es primo
        }
    }


return res;
}

void paresMenores(int x){
    int i;
    for(i=1;i<=x;i++){
        if(i%2==0){
            printf("%d - ",i);
        }
    }printf("\n");

}

void primosMenores(int x){
     int i;
    for(i=1;i<=x;i++){
        if(esPrimo(i)== 1){
            printf("%d - ",i);
        }
    }printf("\n");
}

void factorial (int x){
    int i;
    int fact=1;
        for (i=1;i<=x;i++){
        fact=i*fact;
    }
    printf("El factorial de %d es %d.\n",x,fact);


}

void descomposicionFactorial(int x){
    int i,d;

    for(i=2;i<x;i++){
        d=x/i;
        if(x%i==0){
            if (esPrimo(d)==1){
            printf("%d - ",d);
            }
        }
    }printf("\n");

}




int menu (void){
    int op;

    printf("------------------MENÚ-------------------\n");
    printf("1.  ¿Es primo?\n");
    printf("2.  Números pares menores a ese número.\n");
    printf("3.  Números primos menores a ese número.\n");
    printf("4.  Descomposición factorial.\n");
    printf("5.  Factorial del número.\n");
    printf("6.  Salir del programa.\n");
    printf("\n\nEscoge una opción.\n");
    scanf("%d",&op);
return op;
}

int pideNumero(void){
    int n;
    printf("Dame un número.\n");
    scanf("%d",&n);
return n;
}

void main (void){

    int op,num;
    num=pideNumero();
do{
    op=menu();
if (op==1){
//printf("Entra por el 1.\n");
if (esPrimo(num)==0){
    printf("%d no es primo.\n",num);
}else if (esPrimo(num)==1){
    printf("%d es primo.\n",num);
}else {
    printf("Error.\n");
}

} else if (op==2){
//printf("Entra por el 2.\n");
printf("Los números pares menores a %d son:\n",num);
paresMenores(num);

}else if (op==3){
//printf("Entra por el 3.\n");
printf("Los números primos menores a %d son:\n",num);
primosMenores(num);

}else if (op==4){
//printf("Entra por el 4.\n");
printf("La descomposición en números primos de %d es:\n",num);
descomposicionFactorial(num);
}else if (op==5){
//printf("Entra por el 5.\n");

factorial(num);

} else if (op==6){
//printf("Entra por el 6.\n");
printf("Salió.\n");
}else{
printf("Error.\n");

}
}while(op != 6);

}
