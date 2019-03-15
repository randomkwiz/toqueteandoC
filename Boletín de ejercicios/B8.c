/*


---ÁNGELA VÁZQUEZ DOMÍNGUEZ---
BOLETÍN DE EJERCICIOS
1. Leer un número e indicar si es positivo o negativo. El proceso se repetirá hasta que se
introduzca un 0.
2. Leer números hasta que se introduzca un 0. Para cada uno indicar si es par o impar.
3. Pedir números hasta que se teclee uno negativo, y mostrar cuántos números se han
introducido.
4. Pedir números hasta que se teclee un 0, mostrar la suma de todos los números introducidos.
5. Pedir números hasta que se teclee un 0, mostrar la media de todos los números introducidos.
6. Pedir un número N, y mostrar todos los números del 1 al N.
7. Pedir un número y calcular su factorial.
//8. Dadas las edades y alturas de 5 alumnos, mostrar la edad y la estatura media, la cantidad de
alumnos mayores de 18 años, y la cantidad de alumnos que miden más de 1.75.
9. Pide un número (que debe estar entre 0 y 10) y mostrar la tabla de multiplicar de dicho
número.
10. Pedir un número N, introducir N sueldos, y mostrar el sueldo máximo.
11. Pedir 10 números, y mostrar al final si se ha introducido alguno negativo.
12. Diseña una aplicación que muestre las tablas de multiplicar del 1 al 10.
13. Dibuja un cuadrado de n elementos de lado utilizando *.


*/

#include<stdio.h>

void main (void){
    int i;
    int mayorEd=0;
    int mayorAlt=0;
    int edad[5];
    float altura[5];
    float mediaAltura,mediaEdad;
    float sumAlt=0;
    float sumEd=0;

    for(i=0;i<5;i++){
            //Bucle para pedir las edades
        printf("Introduce la edad del alumno %d.\n",i+1);
        scanf("%d",&edad[i]);
        sumEd=sumEd+edad[i];
        if (edad[i]>=18){
            mayorEd++;
        }
    }
    printf("¡Genial! Ya tenemos las edades de nuestros alumnos.\nAhora vamos a por sus alturas.\n");
    for(i=0;i<5;i++){
            //Bucle para pedir las edades
        printf("Introduce la altura del alumno %d.\n",i+1);
        scanf("%f",&altura[i]);
        sumAlt=sumAlt+altura[i];
        if (altura[i]>1.75){
            mayorAlt++;
        }
    }
    mediaAltura=sumAlt/5;
    mediaEdad=sumEd/5;
    printf("La media de las alturas es: %.2f.\nLa media de las edades es %.2f.\n",mediaAltura,mediaEdad);
    printf("Hay %d alumnos mayores de edad, y %d mayores de 1.75m.\n",mayorEd,mayorAlt);
}
