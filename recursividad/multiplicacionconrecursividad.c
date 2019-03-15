/*
-- Ángela Vázquez Domínguez--
Practicando la recursividad en C

Función multiplicación.

Ten en cuenta: La multiplicación es una forma de abreviar una suma.
es decir: 2*3 significa que estás sumando el número "2" tres veces (o al revés, el número "3" dos veces).
Con esto, vamos a hacer la función recursiva de la multiplicación.

*/

int multiplicacion (int x,int y){

    if (x==0 || y ==0){
        return 0;
    } else
        return x+(multiplicacion(x,y-1));


}

void main (void){
    int n1,n2,mult;
    printf("Introduce un numero.\n");
    scanf("%d",&n1);
    printf("Introduce otro numero.\n");
    scanf("%d",&n2);

    mult=multiplicacion(n1,n2);
    printf("%d x %d = %d\n",n1,n2,mult);

}
