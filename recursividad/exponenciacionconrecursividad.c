/*
-- Ángela Vázquez Domínguez--
Practicando la recursividad en C

Función exponencial.

Nota: La operación exponencial (a^b) es en realidad una forma abreviada de la multiplicación, que a su vez
es una forma abreviada de la suma.

Cuando tú haces 2^3, estás haciendo 2*2*2. Es decir, estás multiplicando el numero 2, tres veces.

*/


int exponenciacion (int x,int y){

    if (y == 0){
        return 1;
    } else {
        return x*(exponenciacion(x,y-1));
    }

}

void main (void){
    int n1,n2,exp;
    printf("Introduce una base.\n");
    scanf("%d",&n1);
    printf("Introduce un exponente.\n");
    scanf("%d",&n2);

    exp=exponenciacion(n1,n2);
    printf("%d elevado a %d = %d\n",n1,n2,exp);

}
