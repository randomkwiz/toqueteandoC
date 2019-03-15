/*


---ÁNGELA VÁZQUEZ DOMÍNGUEZ---
BOLETÍN DE EJERCICIOS
1. Leer un número e indicar si es positivo o negativo. El proceso se repetirá hasta que se
introduzca un 0.
2. Leer números hasta que se introduzca un 0. Para cada uno indicar si es par o impar.
3. Pedir números hasta que se teclee uno negativo, y mostrar cuántos números se han
introducido.
//4. Pedir números hasta que se teclee un 0, mostrar la suma de todos los números introducidos.
5. Pedir números hasta que se teclee un 0, mostrar la media de todos los números introducidos.
6. Pedir un número N, y mostrar todos los números del 1 al N.
7. Pedir un número y calcular su factorial.
8. Dadas las edades y alturas de 5 alumnos, mostrar la edad y la estatura media, la cantidad de
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

    int n;
    int suma=0;
    do {
    printf("Introduce un numero.\n");
    scanf("%d",&n);

    suma=suma+n;
    } while(n > 0);
    printf("La suma de los numeros introducidos es %d.\n",suma);



}
