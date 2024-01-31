#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio: Estructuras de decisión simple anidadas

Realiza un programa,que te diga si persona es sujeto a un crédito hipotecario.

Las condiciones que debede cumplir son:

Tener mínimo 5 años de antigüedad en el trabajo.
El 10% de su sueldo mensual debe ser mayor a 1,000pesos 

mx = (sueldo * 100) /10

*/


int main(){

int aniosTrabajo, sueldoMensual, sM;

printf("Ingrese los anios de trabajo: ");
scanf("%d",& aniosTrabajo);
printf("Ingrese el sueldo mensual: ");
scanf("%d",& sueldoMensual);

sM=(sueldoMensual*100)/10;

if(aniosTrabajo >= 5){

  if(sM >= 1000){
    printf("Es una persona sujeto a credito hipotecario! \n");
  }

}

return  0;
}
