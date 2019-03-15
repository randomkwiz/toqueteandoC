/*
-- Ángela Vázquez Domínguez--
Practicando la recursividad en C

Función Fibonacci.

Sucesión de fibonacci.

*/

#include <stdio.h>


int fibonacci(int x)
{
  if (x>2)
    return fibonacci(x-1) + fibonacci(x-2);
  else if (x==2)
    return 1;
  else if (x==1)
    return 1;
  else if (x==0)
    return 0;
}

void main(void)
{
    int n;

    for (n=0; n<=15; n++)
    {
      printf("%d  ", fibonacci(n));
    }



}
