/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ

MACRO EJERCICIO DE REPASO
MENÚ, FECHAS Y HORAS.

	HACER UN MENÚ CON OPCIONES:
	1. DECIR SI LA FECHA Y LA HORA SON VÁLIDAS
	2. SUMAR 1 DÍA
	3. SUMAR 1 SEGUNDO
	4. SUMAR 1 MINUTO
	5. SUMAR 1 HORA

*/


#include<stdio.h>

int meses (int m){
	int res=0;
	if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) {
	res=31;
	}
	else if (m == 4 || m == 6 || m == 9 || m == 11) {

	res=30;
	} else if (m==2){
	res=28;
}
return res;
}


int esBisiesto(int year){
	int res=0;
	int esDivisibleEntreCuatro;
	int esDivisibleEntreCuatroCientos;
	int esDivisibleEntreCien;

esDivisibleEntreCuatro=year%4;
esDivisibleEntreCuatroCientos=year%400;
esDivisibleEntreCien=year%100;

	if (esDivisibleEntreCuatro==0 && (esDivisibleEntreCuatroCientos != 0 || esDivisibleEntreCien==0)){
	res=1; 	//Sí es bisiesto
}


return res;
}


int validezFecha(int day, int month, int year){
	int res=0;
if( day <= 31 && (meses(month))==31 ){

		res=1; 	//Porque sí es válido
		} else if ( day <= 30 && (meses(month))==30 ){
		res=1;
		} else if ( day <= 28 && (meses(month))==28 ){
		res=1;
		} else if ( day == 29 && (meses(month))==28 && (esBisiesto(year))==1 ){
		res=1;
		}else {
		res=0;
		}

return res;
}



int validezHora(int hour, int min, int sec){
	int res=0;

if ((hour >= 0 && hour <= 23) && (min >= 0 && min <= 59) && (sec >= 0 && sec <= 59)) {
		res=1;
		}
return res;
}


void main (void) {

int day, month, year, opcion;
int hour, min, sec;
//int validezFecha=0; //Vamos a suponer que la fecha, de primeras, NO es válida. Y el código especificará cuándo SÍ es válida.
//int validezHora=0; //Vamos a suponer que la hora, de primeras, NO es válida. Y el código especificará cuándo SÍ es válida.


printf("Vamos a introducir una fecha.\n");
printf("Día: \n");
scanf("%d",&day);
printf("Mes: \n");
scanf("%d",&month);
printf("Año: \n");
scanf("%d",&year);



printf("Vamos a introducir la hora.\n");
printf("Hora: \n");
scanf("%d",&hour);
printf("Minutos: \n");
scanf("%d",&min);
printf("Segundos: \n");
scanf("%d",&sec);

do {
printf("\t\tMENU\t\n");
printf("\t1.- Decir si la fecha y la hora son válidas\t\n");
printf("\t2.- Sumar 1 segundo\t\n");
printf("\t3.- Sumar 1 minuto\t\n");
printf("\t4.- Sumar 1 hora\t\n");
printf("\t5.- Sumar 1 día\t\n");
printf("\t6.- Salir\t\n");
printf("Elige opción: ");
scanf("%d",&opcion);
printf("\n");
switch (opcion) {

	case 1:
//Comprobamos cuándo sí es válida la FECHA

		if ( validezFecha(day,month,year)==1 ){

		printf("La fecha %d/%d/%d es válida.\n",day,month,year);
		} else if (validezFecha(day,month,year)==0) {
		printf("La fecha %d/%d/%d no es válida.\n",day,month,year);
		}else {
		printf("Error.\n");
		}


//Comprobamos cuándo sí es válida la HORA


		if ( validezHora(hour,min,sec)==1 ){

		printf("La hora %d:%d:%d es válida.\n",hour,min,sec);
		} else if (validezHora(hour,min,sec)==0) {
		printf("La hora %d:%d:%d no es válida.\n",hour,min,sec);
		}else {
		printf("Error.\n");
		}



	break;
	case 2:
	//printf("Case 2: Sumar 1 segundo\n");

	if ( sec == 59 && min == 59 && hour == 23) {

	hour=0;
	min=0;
	sec=0;
	} else if (sec == 59 && min == 59 && hour < 23) {
	hour++;
	min=0;
	sec=0;
	} else if ( sec == 59 && min < 59 & hour < 23) {
	min++;
	sec=0;
	} else {
	sec++;
	}

	if (hour == 0 && min == 0 && sec == 0){
	printf("Son las %d:%d:%d del día siguiente.\n",hour,min,sec);
	}else {
	printf("Son las %d:%d:%d\n",hour,min,sec);
	}
	break;

	case 3:
	printf("Case 3: Sumar 1 minuto\n");
	if ( sec == 59 && min == 59 && hour == 23) {

	hour=0;
	min=0;
	sec=59;
	} else if (sec == 59 && min == 59 && hour < 23) {
	hour++;
	min=0;
	sec=59;
	} else if ( sec == 59 && min < 59 & hour < 23) {
	min++;
	sec=59;
	} else {
	min++;
	}


	printf("Son las %d:%d:%d\n",hour,min,sec);

	break;

	case 4:
	printf("Case 4: Sumar 1 hora\n");

	if (hour == 23) {
	hour=0;
	} else {
	hour++;
	}
if (hour == 0){
	printf("Son las %d:%d:%d del día siguiente.\n",hour,min,sec);
	}else {
	printf("Son las %d:%d:%d\n",hour,min,sec);
	}
	break;

	case 5:
	printf("Case 5: Sumar 1 día.\n");

	if (day==31 && month==12){
	year++;
	month=1;
	day=1;
	} else if (day==31 && meses(month)==31){
	day=1;
	month++;
	}else if (day==30 && meses(month)==30){
	day=1;
	month++;
	}else if (day==28 && meses(month)==28 && esBisiesto(year)==0){
	day=1;
	month++;
	}else if (day==29 && meses(month)==28 && esBisiesto(year)==1){
	day=1;
	month++;
	}else {
	day++;
	}
	printf("Fecha: %d/%d/%d.\n",day,month,year);

	break;

	case 6:
	printf("Case 6: Salir\n");
	break;

	default:
	printf("Error. Opción no contemplada.\n");






	}

}while( opcion != 6 );
}
