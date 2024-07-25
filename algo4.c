/*4. Escreva um algoritmo para ler o nome e a idade de uma pessoa, e exibir quantos dias de vida
ela possui. Considere sempre anos completos, e que um ano possui 365 dias. Ex: uma pessoa
com 19 anos possui 6935 dias de vida; veja um exemplo de saída: MARIA, VOCÊ JÁ VIVEU 6935
DIAS*/
#include <stdio.h>

int main(void)
{
    
    int idade, dias;
    char nome[15];
    
    printf("Qual é a sua idade? ");
    scanf("%d", &idade);
    
    printf("Qual é os seu nome? ");
    scanf("%s", &nome);

    dias=(idade*365);
    
    printf("%s , você já viveu %d dias.", nome, dias);
    return 0;
}
