/*2. Faça um algoritmo para calcular quantas ferraduras são necessárias para equipar todos os
cavalos comprados para um haras.*/
#include <stdio.h>

int main(void)
{
    int cavalos, ferraduras;   
    printf("Quantos cavalos foram comprados? ");
    scanf("%d", &cavalos);

    ferraduras=(cavalos*4);
    
    printf("\nA quantidade de ferraduras necessárias é: %d ", ferraduras);
    return 0;
}
