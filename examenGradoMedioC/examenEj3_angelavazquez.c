/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ 

EXAMEN HLC

24 / ENERO / 2018

*/

//EJERCICIO 3

#include<stdio.h>

void dibujarRellenoCuadrado (int dimension){
	int i, j;

	for (i=0;i<dimension;i++){
		for (j=0;j<dimension;j++){
		printf(" @ ");
		}
	printf("\n");
	}

}

void pintarLineaAsterisco (int dimension){

	int i;
	for (i=0;i<dimension;i++){
	printf("* ");	
	}
	printf("\n");
}

void pintarLineaPregunta (int dimension){

	int i;
	for (i=0;i<dimension;i++){
	printf("? ");	
	}
	printf("\n");
}

void pintarLineaAlmohadilla (int dimension){

	int i;
	for (i=0;i<dimension;i++){
	printf("# ");	
	}
	printf("\n");
}

void pintarCuerpoAsterisco (int dimension) {

	int i;

	printf("*");
		for (i=0;i<dimension-2;i++){
		printf("  ");
		}
	printf("*\n");

}

void pintarCuerpoPregunta (int dimension) {

	int i;

	printf("?");
		for (i=0;i<dimension-2;i++){
		printf("  ");
		}
	printf("?\n");


}

void pintarCuerpoAlmohadilla (int dimension) {

	int i;

	printf("#");
		for (i=0;i<dimension-2;i++){
		printf("  ");
		}
	printf("#\n");


}



void dibujarPerimetroCuadrado (int dimension, int simbolo){

	int i, j;
	
	switch (simbolo) {
	case 1: 
	pintarLineaAsterisco(dimension);
	for (i=0;i<dimension-2;i++){
	pintarCuerpoAsterisco(dimension);
	}
	pintarLineaAsterisco(dimension);


	break;
	case 2:
	
	pintarLineaPregunta(dimension);
	for (i=0;i<dimension-2;i++){
	pintarCuerpoPregunta(dimension);
	}
	pintarLineaPregunta(dimension);
	break;

	case 3:
	
	pintarLineaAlmohadilla(dimension);
	for (i=0;i<dimension-2;i++){
	pintarCuerpoAlmohadilla(dimension);
	}
	pintarLineaAlmohadilla(dimension);

	break;

	default:
	printf("Error.\n");


	}



}


int dimensionesCuadrado(){
	int dimension=0;
	
	printf("Introduce el lado del cuadado (Debe estar entre 10 y 20):\n");
	scanf("%d",&dimension);
	
	if ( dimension >= 10 && dimension <= 20 ) {
	return dimension;

	} else if (!(dimension >= 10 && dimension <= 20 )){

	dimension=dimensionesCuadrado();

	}
}

void main (void){

	int op;
	int dimension;
	int simbolo;
do {
	printf("0.\tEstablecer dimensión.\n");
	printf("1.\tDibujar perímetro del cuadrado con *.\n");
	printf("2.\tDibujar perímetro del cuadrado con ?.\n");
	printf("3.\tDibujar perímetro del cuadrado con #.\n");
	printf("4.\tDibujar relleno del cuadrado con @.\n");
	printf("10.\tSalir\n");

printf("Elige una opción: \n");
scanf("%d",&op);

if (op >= 0 && op <= 4 || op == 10 ) {

//printf("Entra.\n");

	switch(op){

	case 0:
	dimension=dimensionesCuadrado();	
	printf("%d\n",dimension);

	break;

	case 1:
	//Dibujar perimetro con *
	simbolo=1;
	if ( dimension >= 10 && dimension <= 20 ) {
	
	dibujarPerimetroCuadrado(dimension,simbolo);




	} else {
	printf("Dimensión no válida o no introducida.\n");
	}

	break;

	case 2:
	//Dibujar perimetro con ?
	simbolo=2;
if ( dimension >= 10 && dimension <= 20 ) {
	
	dibujarPerimetroCuadrado(dimension,simbolo);




	} else {
	printf("Dimensión no válida o no introducida.\n");
	}	





	break;

	case 3:
	//Dibujar perimetro con #
	simbolo=3;
if ( dimension >= 10 && dimension <= 20 ) {
	
	dibujarPerimetroCuadrado(dimension,simbolo);




	} else {
	printf("Dimensión no válida o no introducida.\n");
	}	



	break;

	case 4:
	// Dibujar relleno con @
	if ( dimension >= 10 && dimension <= 20 ) {
	dibujarRellenoCuadrado(dimension);
	




	} else {
	printf("Dimensión no válida o no introducida.\n");
	}	
	printf("Entra.\n");


	break;

	case 10:
	printf("Salir.\n");
	break;
	default: 
	printf("Error. Opción no contemplada.\n");


	}


} //Cierra el if del option del menú 
else if (!(op >= 0 && op <= 4 || op == 10 )){
while ( !(op >= 0 && op <= 4 || op == 10 )){
printf("Elige una opción: \n");
scanf("%d",&op);
}

} // Cierra el else if

}while(op != 10 );
} //Cierra función main
