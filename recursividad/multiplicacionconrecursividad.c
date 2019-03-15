/*
-- �ngela V�zquez Dom�nguez--
Practicando la recursividad en C

Funci�n multiplicaci�n.

Ten en cuenta: La multiplicaci�n es una forma de abreviar una suma.
es decir: 2*3 significa que est�s sumando el n�mero "2" tres veces (o al rev�s, el n�mero "3" dos veces).
Con esto, vamos a hacer la funci�n recursiva de la multiplicaci�n.

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
