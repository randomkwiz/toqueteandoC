/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ 

EXAMEN HLC

24 / ENERO / 2018

*/

//EJERCICIO 2

#include<stdio.h>

void main (void){

	float vector[20];
	int n,i,j,position;
	float maximo=-999990;
	float minimo=99999999999999;
	float media;
	float sumaN;
	int sumaImpares=0;
	int sumaPares=0;
	do {

	printf("Introduce un número entre 1 y 20.\n");
	scanf("%d",&n);



	} while (!(n>=1 && n<=20));
//printf("%d\n",n);

//Hasta aquí el bucle donde te pide el número hasta que le des uno entre 1 y 20.

	for (i=0;i<n;i++){
	printf("Introduce el dato %d.\n",i+1);		//Pongo el "i+1" para que no muestre "Introduce el dato 0", sino "Introduce el dato 1".
	scanf("%f",&vector[i]);
	}

	//bucle para pedir "n" datos y guardarlos en el vector.



	//EL NUMERO MAXIMO
	
	for (i=0;i<n;i++){
	if (vector[i] > maximo){
		maximo=vector[i];

	}  

	if (vector [i] < minimo) {
		minimo=vector[i];
	}

	}

printf("max\t%.0f\nmin\t%.0f\n",maximo,minimo);		//Te da el numero max y min

printf("primer número introducido:\t%.2f.\n",vector[0]);		//Te da el primer numero introducido
printf("último número introducido\t%.2f.\n",vector[n-1]);		//Te da el último numero introducido. Le resto uno porque la última posición de los arrays es basura




//PARA VER EL NÚMERO DE EN MEDIO
	if (n%2==0){
	position=n/2;
	printf("El número de en medio es:\t%.2f\n",vector[position-1]);
	
	} else if (n%2!=0){
	position=n/2;
	printf("El número de en medio es:\t%.2f\n",vector[position]);
	}


//Para ver la media, y la suma de los numeros con posicion par e impar
	for (i=0;i<n;i++){
	if (i%2==0){		//Si la posición es PAR
		sumaPares=sumaPares+vector[i];

	}  

	else if (i%2!=0) {	//Si la posición es IMPAR
		sumaImpares=sumaImpares+vector[i];
	}

	} //cierra for


sumaN=sumaPares+sumaImpares;
media=sumaN/n;

printf("La media de todos los números introducidos es:\t%.2f\n",media);
printf("La suma de los números que ocupan una posición PAR es:\t%d\n",sumaPares);
printf("La suma de los números que ocupan una posición IMPAR es:\t%d\n",sumaImpares);


}
