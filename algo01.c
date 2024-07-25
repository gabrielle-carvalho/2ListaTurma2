/*1. A imobiliária Imóbilis vende apenas terrenos retangulares. Faça um algoritmo para ler as
dimensões de um terreno e depois exibir a área do terreno.*/
#include <stdio.h>

int main(void)
{
    float largura, altura, area;   
    printf("Digite a largura do terreno: ");
    scanf("%f", &largura);
    
    printf("Digite a altura do terreno: ");
    scanf("%f", &altura);
    
    area=(largura*altura);
    
    printf("\nÁrea do terreno: %.f ", area );
    return 0;
}
