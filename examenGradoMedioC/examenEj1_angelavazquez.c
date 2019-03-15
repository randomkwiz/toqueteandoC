/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ 

EXAMEN HLC

24 / ENERO / 2018

*/

//EJERCICIO 1

#include<stdio.h>

int paridad (int x){

	int res=0;

	if (x%2==0){
	res=1;
	}
return res;
}


int main (void){

	int numero=0;
	int sumaN=0;
	int bucle=1;
	int contador=0;
	float media;
do {
	printf("Introduce un número.\n");
	scanf("%d",&numero);

	if (paridad(numero)==1){		//Si el número es par
	sumaN=sumaN+numero;
	contador++;
	}else if (paridad(numero)==0) {		//Si no es par (es impar)
	bucle=0;
	}		

}while(bucle != 0);

media=sumaN/contador;

printf("La media de los números pares introducidos es: %.2f.\n",media);
return 0;
}
