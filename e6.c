#include <stdio.h>
#include <stdlib.h>

/*
Ejercicio: Estructuras de decisión doble
Calcular el salario semanal de un empleado, sabiendo que éste se
calcula en base a las horas semanales trabajadas y de acuerdo a un
precio especificado por hora. Si se pasa de las 40 horas semanales,
las horas extras se pagarán a razón de 1.5 veces la hora ordinaria.

ENTRADAS:
Horas semanales trabajadas (HST)
Precio por hora (PH)

PROCESO:
Si las horas semanales trabajadas <= 40
Calcular salario semanal = (HST * 40)
Si las horas semanales trabajadas > 40
Calcular salario semanal = (40 * PH + (PH * 1.5 *(HST-40)))
*/


int CSS;

int main(){

int HST,PH;

printf("Ingresa las horas semanales trabajadas: ");
scanf("%d",& HST);
printf("Ingresa el precio por hora: ");
scanf("%d",& PH);

if(HST<=40){
   CSS=(HST*40);
}else{
   CSS= (40 * PH + (PH * 1.5 *(HST-40)));
}

printf("El salario semanal del empleado es de: %d $ \n", CSS);

return 0;
}