/*


---�NGELA V�ZQUEZ DOM�NGUEZ---
BOLET�N DE EJERCICIOS
1. Leer un n�mero e indicar si es positivo o negativo. El proceso se repetir� hasta que se
introduzca un 0.
2. Leer n�meros hasta que se introduzca un 0. Para cada uno indicar si es par o impar.
3. Pedir n�meros hasta que se teclee uno negativo, y mostrar cu�ntos n�meros se han
introducido.
4. Pedir n�meros hasta que se teclee un 0, mostrar la suma de todos los n�meros introducidos.
5. Pedir n�meros hasta que se teclee un 0, mostrar la media de todos los n�meros introducidos.
6. Pedir un n�mero N, y mostrar todos los n�meros del 1 al N.
7. Pedir un n�mero y calcular su factorial.
8. Dadas las edades y alturas de 5 alumnos, mostrar la edad y la estatura media, la cantidad de
alumnos mayores de 18 a�os, y la cantidad de alumnos que miden m�s de 1.75.
9. Pide un n�mero (que debe estar entre 0 y 10) y mostrar la tabla de multiplicar de dicho
n�mero.
10. Pedir un n�mero N, introducir N sueldos, y mostrar el sueldo m�ximo.
//11. Pedir 10 n�meros, y mostrar al final si se ha introducido alguno negativo.
12. Dise�a una aplicaci�n que muestre las tablas de multiplicar del 1 al 10.
13. Dibuja un cuadrado de n elementos de lado utilizando *.


*/

void main (void){
    int i,n;
    int cont=0;
    for(i=0;i<10;i++){
        printf("Introduce un numero.\n");
        scanf("%d",&n);
        if (n<0){
            cont++;
        }
    }
    if (cont>0){
        printf("Has introducido %d numero(s) negativos.\n",cont);
    } else if (cont<=0){
    printf("No has introducido ningun numero negativo.\n");
    }


}
