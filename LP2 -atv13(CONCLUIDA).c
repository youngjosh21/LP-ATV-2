// � O JOVEM JOSH!!!!!!!!!

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

// Exercicio 13:

// Crie um programa que solicite do usu�rio dois n�meros inteiros e informe qual destes n�meros � o maior e qual � o menor.

int main()
{
    int numeroUm;
    int numeroDois;
setlocale(LC_ALL ,  "Portuguese");
  
    printf("digite dois numeros!\n");
    printf("digite o primeiro numero:\n");
    scanf ("%d", &numeroUm);
        printf("digite o segundo numero:\n");
    scanf ("%d", &numeroDois);

    if (numeroUm > numeroDois)
    {
        printf("O primeiro numero � maior!\n e o segundo � menor!");
    }
    else
    {
        printf("O segundo numero � maior \n e o primeiro � menor!");
    }

    return 0;
}