/*

---�NGELA V�ZQUEZ DOM�NGUEZ ---

Bolet�n de ejercicios Tema 3

FUNCIONES
1. Realiza un programa que utilice una funci�n llamada calculaMedia. Esta funci�n tiene el
siguiente prototipo: double calculaMedia(int totalNumeros). Donde totalNumeros es el
n�mero de n�meros a los que se les va a hacer la media.

//2. Realiza el ejercicio de la calculadora con men�s utilizando los siguientes procedimientos:
        � void menu(): que va a mostrar el men�.
        � Void calculaSuma(): que va a pedir dos n�meros reales y les va a realizar la suma.
        � Void calculaResta(): que va a pedir dos n�meros reales y les va a realizar la resta.
        � Void calculaMult(): que va a pedir dos n�meros reales y les va a realizar la
        multiplicaci�n.
        � Void calculaDiv(): que va a pedir dos n�meros reales y les va a realizar la divisi�n, en
        caso de que el segundo n�mero fuera 0, deber� salir el mensaje: �no se puede dividir por
        0�


*/

#include<stdio.h>

void menu (){
    printf("----OPCIONES----\n");
    printf("1.  SUMA\n");
    printf("2.  RESTA\n");
    printf("3.  MULTIPLICACION\n");
    printf("4.  DIVISION\n");

}
void calculaSuma(){
    int n1,n2,res;
    printf("Dame un numero.\n");
    scanf("%d",&n1);
    printf("Dame otro numero.\n");
    scanf("%d",&n2);
    res=n1+n2;
    printf("El resultado es %d.\n",res);
}

void calculaResta(){
    int n1,n2,res;
    printf("Dame un numero.\n");
    scanf("%d",&n1);
    printf("Dame otro numero.\n");
    scanf("%d",&n2);
    res=n1-n2;
    printf("El resultado es %d.\n",res);
}

void calculaMulti(){
    int n1,n2,res;
    printf("Dame un numero.\n");
    scanf("%d",&n1);
    printf("Dame otro numero.\n");
    scanf("%d",&n2);
    res=n1*n2;
    printf("El resultado es %d.\n",res);
}
void calculaDiv(){
    int n1,n2,res1,res2;
    printf("Dame un numero.\n");
    scanf("%d",&n1);
    printf("Dame otro numero.\n");
    scanf("%d",&n2);
    if (n2==0){
     printf("No se puede dividir entre 0.\n");
    } else {
    res1=n1/n2;
    res2=n1%n2;
    printf("El resultado es %d.\nY el resto es %d.\n",res1,res2);
    }
}

void main (void){
    int n1,n2,op;
    menu();
    printf("�Que opcion quieres?\n");
    scanf("%d",&op);

    if (op==1){
        calculaSuma();

    } else if (op==2){
        calculaResta();


    }else if (op==3){
        calculaMulti();


    }else if (op==4){
       calculaDiv();

    }else{
    printf("Error.\n");
    }


}
