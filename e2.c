#include <stdio.h>
#include <stdlib.h>

/*

Escribe un programa que reciba de teclado la calificación del 
examen de un alumno e imprima el siguiente texto únicamente 
si la calificación fue aprobatoria.

Mensaje: 
"¡Felicidades aprobaste el curso!"
La calificación mínima aprobatoria es: 8

*/

int main(){

int calificacion;

printf("Ingresa la calificacion: ");
scanf("%d",&calificacion);

if(calificacion >= 80){
    printf("Felicidades aprobaste el curso, eres todo un crack! :D \n");
}else{
    printf("Siguete esforzandote, no aprobado! :( \n");
}

return 0;
}