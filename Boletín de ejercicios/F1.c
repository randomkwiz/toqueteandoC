/*

---ÁNGELA VÁZQUEZ DOMÍNGUEZ ---

Boletín de ejercicios Tema 3

FUNCIONES
//1. Realiza un programa que utilice una función llamada calculaMedia. Esta función tiene el
siguiente prototipo: double calculaMedia(int totalNumeros). Donde totalNumeros es el
número de números a los que se les va a hacer la media.

2. Realiza el ejercicio de la calculadora con menús utilizando los siguientes procedimientos:
        • void menu(): que va a mostrar el menú.
        • Void calculaSuma(): que va a pedir dos números reales y les va a realizar la suma.
        • Void calculaResta(): que va a pedir dos números reales y les va a realizar la resta.
        • Void calculaMult(): que va a pedir dos números reales y les va a realizar la
        multiplicación.
        • Void calculaDiv(): que va a pedir dos números reales y les va a realizar la división, en
        caso de que el segundo número fuera 0, deberá salir el mensaje: “no se puede dividir por
        0”


*/

#include<stdio.h>

double calculaMedia (int totalNumeros){
    int a[totalNumeros];
    int i;
    double suma=0;
    for(i=1;i<=totalNumeros;i++){
        printf("Introduce el numero %d.\n",i);
        scanf("%d",&a[i]);
        suma=suma+a[i];

    }

return suma/totalNumeros;
}



void main (void){
    int x;
    double media;
    printf("¿Cuantos numeros son?\n");
    scanf("%d",&x);
    media=calculaMedia(x);
    printf("La media es %.2lf.\n",media);


}
