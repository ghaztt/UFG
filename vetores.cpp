#include <stdio.h>
#include <stdlib.h>

int main ()
{
float notasTemp[3];	
float notas[3] = {10, 7.9, 8.5};
int pos; //posicao na estrutura vetorial
float notalida;
int i;

printf("nota[0] = %.1f\n", notas[0]);
printf("nota[1] = %.1f\n", notas[1]);
printf("nota[2] = %.1f\n", notas[2]);

notas [0] =notas[0] + 0.5;
notas [1] =notas[1] + 0.5;

printf("\nNotas apos acresimo de 0.5:\n");
printf("nota[0] = %.1f\n", notas[0]);
printf("nota[1] = %.1f\n", notas[1]);
printf("nota[2] = %.1f\n", notas[2]);

notas[2] = 8.7;

printf("\nNotas apos revisao de prova:\n");
printf("nota[0] = %.1f\n", notas[0]);
printf("nota[1] = %.1f\n", notas[1]);
printf("nota[2] = %.1f\n", notas[2]);

printf("\nposicao da nota a ser alterada\n");
scanf("%d", &pos);
printf("novo valor da nota:   ");
scanf("%f", &notas[pos]);


for (i=0; i<=2; i++){
printf("nota[%d] = %.1f\n",i,  notas[i]);






}


}
