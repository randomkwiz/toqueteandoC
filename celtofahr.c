#include <stdio.h>
/* Voy a hacer un programa que imprima una tabla de temperaturas en celsius y sus correspondientes en farhenheit */
void main(void){

float fahr, celsius, kelvin;
float upper, lower, step;
lower = 35; /* el minimo */
upper = 50; /* el maximo */
step = 0.5; /*el incremento */
celsius = lower;
printf("\nCelsius\tKelvin\tFahrenheit\n");
while (celsius <= upper) {
    fahr = (celsius * (9.0 / 5.0)) + 32;
    kelvin = celsius + 273.15;
    printf("\n%2.1f\t%2.1f\t%2.1f\n", celsius, kelvin, fahr);
    celsius = celsius + step;
}
system("pause");
}



