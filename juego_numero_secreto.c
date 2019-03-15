/*

�NGELA V�ZQUEZ DOM�NGUEZ
JUEGO DEL N�MERO SECRETO

Juego  del  n�mero  secreto.  El  ordenador  elegir�  un  n�mero  al  azar  entre  1  y  100.  El
usuario ir� introduciendo n�meros por teclado, y el ordenador le ir� dando pistas: "mi
n�mero es mayor" o "mi n�mero es menor", hasta que el usuario acierte. Entonces el
ordenador le felicitar� y le comunicar� el n�mero de intentos que necesit� para acertar
el n�mero secreto.

*/

#include<stdio.h>
#include <stdlib.h>//required to use 'rand()'
#include <time.h>//required to use 'srand(time(NULL))'

void main (void){

    srand(time(NULL));                  //required for "randomness"
    int numeroSecreto;
    int numeroJugador=-1;
    int min, max, op;
    int intentos=0;

    printf("El ordenador va a pensar un numero... \n");
    printf("El ordenador ya lo tiene! �Ser�s capaz de adivinarlo?\n");


    numeroSecreto=rand();           //generate a number
    printf("%d\n",numeroSecreto);

    while(numeroSecreto != numeroJugador) {
    intentos++;
    printf("Elige un numero: \n");
    scanf("%d",&numeroJugador);

    if (numeroJugador == numeroSecreto){
        printf("�Hey! �Lo has conseguido!\n");
        printf("Intentos: %d\n",intentos);
    } else {
    printf("L�stima, sigue intentandolo\n");
    printf("�Quieres una pista?\n1\tSI\n2\tNO\n");
    scanf("%d",&op);
        if (op == 1){

            if (numeroSecreto>numeroJugador){
                printf("El numero secreto es mayor\n");
            } else if (numeroSecreto<numeroJugador){
            printf("El numero secreto es menor\n");
            }

        } else if (op == 2){
            printf("�Ok! �Animo!\n");
        } else {
        printf("Opcion no contemplada. Error. Continuamos con el juego. \n");
        }
    }

    }
}
