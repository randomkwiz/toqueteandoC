
/*

ÁNGELA VÁZQUEZ DOMÍNGUEZ

SIMULADOR DE BATALLA
JUGADOR VS. MÁQUINA

ESTILO JRPG EN MODO TEXTO - SIMPLIFICADO


*/

#include<stdio.h>
#include<stdlib.h> //Para el random

int elegirClase(void){
    int op;
    printf("Elije tu clase, campeón: \n");
    printf("0. Clérigo\n");
    printf("1. Luchador\n");
    printf("2. Arquero\n");
    printf("3. Mago\n");
    printf("4. Ninja\n");
    scanf("%d",&op);

    switch (op) {
        case 0:
        printf("Has elegido CLERIGO\n");
        return 0;

        break;

        case 1:
        printf("Has elegido LUCHADOR\n");
        return 1;
        break;

        case 2:
        printf("Has elegido ARQUERO\n");
        return 2;
        break;

        case 3:
        printf("Has elegido MAGO\n");
        return 3;
        break;

        case 4:
        printf("Has elegido NINJA\n");
        return 4;
        break;

        default:
        printf("No has elegido ninguna opción válida.\n");
        elegirClase();

    }

}


int revisarPJ (float x){

 if (x <= 0){

                printf("Has muerto.\n");


            } else {

                printf("¡Seguimos!\n");
            }

}


int revisarEnemigo(float x){
 if (x <= 0){

                printf("El enemigo ha muerto.\n");


            } else {

                printf("¡Seguimos!\n");
            }


}



void main (void){

        float FuerzaNormalPJ[5],FuerzaMagicaPJ[5],ResistenciaNormalPJ[5],ResistenciaMagicaPJ[5],ProbabilidadCriticoPJ[5], ProbabilidadEsquivarPJ[5], VidaRestante[2],huida;
        int op,claseJugador,claseEnemigo,decisionEnemigo;
        int VidaTotal=1000;
        int bucle=1;
        VidaRestante[0]=1000;
        VidaRestante[1]=1000;


       // Acciones: Ataque Mágico, Ataque físico, Esquivar, Huir (Hay % de fallar), curarse (hay % de fallar y te curas un % aleatorio).
        /*
        Clases:
        0 - Clerigo
        1 - Luchador
        2 - Arquero
        3 - Mago
        4 - Ninja
        */

        //Clerigo
       FuerzaNormalPJ[0]=rand()%30;
       FuerzaMagicaPJ[0]=rand()%70;
       ResistenciaNormalPJ[0]=rand()%50;
       ResistenciaMagicaPJ[0]=rand()%100;
       ProbabilidadCriticoPJ[0]=rand()%20;
       ProbabilidadEsquivarPJ[0]=rand()%30;
       //Total: 300

       //Luchador
        FuerzaNormalPJ[1]=rand()%100;
        FuerzaMagicaPJ[1]=rand()%30;
        ResistenciaNormalPJ[1]=rand()%100;
        ResistenciaMagicaPJ[1]=rand()%20;
        ProbabilidadCriticoPJ[1]=rand()%30;
        ProbabilidadEsquivarPJ[1]=rand()%20;
        //Total: 300

        //Arquero
        FuerzaNormalPJ[2]=rand()%70;
        FuerzaMagicaPJ[2]=rand()%30;
        ResistenciaNormalPJ[2]=rand()%60;
        ResistenciaMagicaPJ[2]=rand()%40;
        ProbabilidadCriticoPJ[2]=rand()%60;
        ProbabilidadEsquivarPJ[2]=rand()%40;
        //Total: 300

        //Mago
        FuerzaNormalPJ[3]=rand()%30;
        FuerzaMagicaPJ[3]=rand()%100;
        ResistenciaNormalPJ[3]=rand()%20;
        ResistenciaMagicaPJ[3]=rand()%80;
        ProbabilidadCriticoPJ[3]=rand()%50;
        ProbabilidadEsquivarPJ[3]=rand()%50;
        //Total: 300

       //Ninja
        FuerzaNormalPJ[4]=rand()%40;
        FuerzaMagicaPJ[4]=rand()%40;
        ResistenciaNormalPJ[4]=rand()%50;
        ResistenciaMagicaPJ[4]=rand()%50;
        ProbabilidadCriticoPJ[4]=rand()%60;
        ProbabilidadEsquivarPJ[4]=rand()%60;
        //Total: 300



do {

        printf("\t\t OPCIONES \t\t\n");
        printf("\t 0. Elegir clase \t\n");
        printf("\t 1. Ataque Mágico \t\n");
        printf("\t 2. Ataque Físico \t\n");
        printf("\t 3. Esquivar \t\n");
        printf("\t 4. Curarse \t\n");
        printf("\t 5. Huir \t\n");
        printf("\t 6. SALIR \t\n");
       scanf("%d",&op);

switch (op) {

    case 0:
//ELEGIR CLASE

      claseJugador=elegirClase();
      claseEnemigo=rand()%5;
  //    printf("%d",claseJugador);
    printf("Tu vida inicial es de %d\n",VidaTotal);
    printf("La vida inicial de tu enemigo es de %d\n",VidaTotal);


    printf("¡¡QUE EMPIECE LA BATALLA!!\n");
    printf("Has elegido %d\n",claseJugador);
    printf("El enemigo ha elegido %d\n",claseEnemigo);
    main();


      break;


    case 1:
//ATAQUE MÁGICO


    printf("Vas a realizar un ataque mágico\n");
    decisionEnemigo=((rand()%4)+1);


    switch (decisionEnemigo){

        break;
        case 1:
        printf("El enemigo va a efectuar un ataque mágico.\n");
        //Vida PJ
        VidaRestante[0]= ResistenciaMagicaPJ[claseJugador] - FuerzaMagicaPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);
//Vida Enemigo
    VidaRestante[1]= ResistenciaMagicaPJ[claseEnemigo] - FuerzaMagicaPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 2:
        printf("El enemigo va a efectuar un ataque físico.\n");
         //Vida PJ
        VidaRestante[0]= ResistenciaNormalPJ[claseJugador] - FuerzaNormalPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);

        //Vida Enemigo
    VidaRestante[1]= ResistenciaMagicaPJ[claseEnemigo] - FuerzaMagicaPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);





printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 3:
        printf("El enemigo quiere esquivar.\n");

        huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo esquivó tu ataque.\n");
        }
        else {
             //Vida Enemigo
        printf("El enemigo no pudo esquivar tu ataque.\n");
        VidaRestante[1]= ResistenciaMagicaPJ[claseEnemigo] - FuerzaMagicaPJ[claseJugador];
        revisarEnemigo(VidaRestante[1]);

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 4:
        printf("El enemigo se va a curar.\n");

        if (claseEnemigo == 0 ) {
            //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%70;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }
        } else {
        //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%25;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }


        }


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 5:
        printf("El enemigo va a efectuar una huida.\n");

         huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo huyó.\n");
        }
        else {
             //Vida Enemigo
        printf("El enemigo no pudo huir.\n");
        VidaRestante[1]= ResistenciaMagicaPJ[claseEnemigo] - FuerzaMagicaPJ[claseJugador];
        revisarEnemigo(VidaRestante[1]);

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;

        }






      break; //break del case 1 del main
    case 2:
//ATAQUE FISICO



    printf("Vas a realizar un ataque físico\n");
    decisionEnemigo=((rand()%4)+1);


    switch (decisionEnemigo){


        case 1:
        printf("El enemigo va a efectuar un ataque mágico.\n");
        //Vida PJ
        VidaRestante[0]= ResistenciaMagicaPJ[claseJugador] - FuerzaMagicaPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);
//Vida Enemigo
    VidaRestante[1]= ResistenciaNormalPJ[claseEnemigo] - FuerzaNormalPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 2:
        printf("El enemigo va a efectuar un ataque físico.\n");
         //Vida PJ
        VidaRestante[0]= ResistenciaNormalPJ[claseJugador] - FuerzaNormalPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);

     //Vida Enemigo
    VidaRestante[1]= ResistenciaNormalPJ[claseEnemigo] - FuerzaNormalPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);





printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 3:
        printf("El enemigo quiere esquivar.\n");

        huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo esquivó tu ataque.\n");
        }
        else {
             //Vida Enemigo
        printf("El enemigo no pudo esquivar tu ataque.\n");
       //Vida Enemigo
    VidaRestante[1]= ResistenciaNormalPJ[claseEnemigo] - FuerzaNormalPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);
        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 4:
        printf("El enemigo se va a curar.\n");

        if (claseEnemigo == 0 ) {
            //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%70;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }
        } else {
        //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%25;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }


        }
          //Vida Enemigo
    VidaRestante[1]= ResistenciaNormalPJ[claseEnemigo] - FuerzaNormalPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);

        break;
        case 5:
        printf("El enemigo va a efectuar una huida.\n");

         huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo huyó.\n");
        }
        else {
             //Vida Enemigo
        printf("El enemigo no pudo huir.\n");
       //Vida Enemigo
    VidaRestante[1]= ResistenciaNormalPJ[claseEnemigo] - FuerzaNormalPJ[claseJugador];
    revisarEnemigo(VidaRestante[1]);

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;

        }




      break;  //break del case 2 del main

    case 3:


//HUIDA (del pj)



    printf("Vas a intentar huir\n");
    decisionEnemigo=((rand()%4)+1);
huida=rand()%100;
        if (huida < 10) {
            printf("Conseguiste huir.\n");
        }
        else {
             //Vida Enemigo
        printf("Fallaste en la huida.\n");

    switch (decisionEnemigo){


        case 1:
        printf("El enemigo va a efectuar un ataque mágico.\n");
        //Vida PJ
        VidaRestante[0]= ResistenciaMagicaPJ[claseJugador] - FuerzaMagicaPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 2:
        printf("El enemigo va a efectuar un ataque físico.\n");
         //Vida PJ
        VidaRestante[0]= ResistenciaNormalPJ[claseJugador] - FuerzaNormalPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 3:
        printf("El enemigo quiere esquivar.\n");

            printf("No habia nada que esquivar.\n");

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 4:
        printf("El enemigo se va a curar.\n");

        if (claseEnemigo == 0 ) {
            //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%70;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }
        } else {
        //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%25;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }


        }


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 5:
        printf("El enemigo va a efectuar una huida.\n");

         huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo huyó.\n");
        }
        else {

        printf("El enemigo no pudo huir.\n");

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;

        }


      break; //break del case 3 del main

    case 4:
//CURARSE

    printf("Vas a curarte\n");
    decisionEnemigo=((rand()%4)+1);


     if (claseJugador == 0 ) {
            //Vida PJ
        VidaRestante[0]= VidaRestante[0]+rand()%70;
        revisarPJ(VidaRestante[0]);

            if (VidaRestante[0] >= 1000 ){
                VidaRestante[0]=1000;
            }
        } else {
        //Vida PJ
        VidaRestante[0]= VidaRestante[0]+rand()%25;
        revisarPJ(VidaRestante[0]);
            if (VidaRestante[0] >= 1000 ){
                VidaRestante[0]=1000;
            }


        }




    switch (decisionEnemigo){

        case 1:
        printf("El enemigo va a efectuar un ataque mágico.\n");
        //Vida PJ
        VidaRestante[0]= ResistenciaMagicaPJ[claseJugador] - FuerzaMagicaPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 2:
        printf("El enemigo va a efectuar un ataque físico.\n");
         //Vida PJ
        VidaRestante[0]= ResistenciaNormalPJ[claseJugador] - FuerzaNormalPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 3:
        printf("El enemigo quiere esquivar.\n");

            printf("No habia nada que esquivar.\n");

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 4:
        printf("El enemigo se va a curar.\n");

        if (claseEnemigo == 0 ) {
            //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%70;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }
        } else {
        //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%25;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }


        }


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 5:
        printf("El enemigo va a efectuar una huida.\n");

         huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo huyó.\n");
        }
        else {

        printf("El enemigo no pudo huir.\n");

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;

        }

      break;        //break del case 4 del main


    case 5:
//HUIR



          printf("Vas a huir\n");
    decisionEnemigo=((rand()%4)+1);

huida=rand()%100;
        if (huida < 10) {
            printf("Pudiste huir.\n");
            bucle=0;
        }
        else {

        printf("No pudiste huir.\n");

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        }



    switch (decisionEnemigo){


        case 1:
        printf("El enemigo va a efectuar un ataque mágico.\n");
        //Vida PJ
        VidaRestante[0]= ResistenciaMagicaPJ[claseJugador] - FuerzaMagicaPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 2:
        printf("El enemigo va a efectuar un ataque físico.\n");
         //Vida PJ
        VidaRestante[0]= ResistenciaNormalPJ[claseJugador] - FuerzaNormalPJ[claseEnemigo];
        printf("Tu vida restante es: %f", VidaRestante[0]);

           revisarPJ(VidaRestante[0]);


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 3:
        printf("El enemigo quiere esquivar.\n");

            printf("No habia nada que esquivar.\n");

printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 4:
        printf("El enemigo se va a curar.\n");

        if (claseEnemigo == 0 ) {
            //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%70;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }
        } else {
        //Vida Enemigo
        VidaRestante[1]= VidaRestante[1]+rand()%25;
        revisarEnemigo(VidaRestante[1]);
            if (VidaRestante[1] >= 1000 ){
                VidaRestante[1]=1000;
            }


        }


printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;
        case 5:
        printf("El enemigo va a efectuar una huida.\n");

         huida=rand()%100;
        if (huida < 10) {
            printf("El enemigo huyó.\n");
        }
        else {

        printf("El enemigo no pudo huir.\n");

        }



printf("\tVida de tu personaje: %d\n",VidaRestante[0]);
printf("\tVida del enemigo: %d\n",VidaRestante[1]);
        break;

        }


      break;


        case 6:
            bucle=0;
            break;

   default :
       printf("Error. Opción no contemplada.\n");
    main();


}



} //cierra switch op
} while (bucle != 0);
} //cierra main
