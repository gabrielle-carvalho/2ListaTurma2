/*38. Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e
mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.*/
#include<stdio.h>
#include <time.h>
int main(void){
    int nascimento, idadeAnos, idadeMeses, idadeDias, idadeSemanas;
        
    time_t mytime;
    mytime = time(NULL);
    struct tm tm = *localtime(&mytime);

    printf("Qual foi o ano do seu nascimento? ");
    scanf("%d", &nascimento);
    
    idadeAnos=(tm.tm_year + 1900)-nascimento;
    printf("\nIdade em anos = %d", idadeAnos);
    
    idadeMeses=idadeAnos*12;
    printf("\nIdade em meses = %d", idadeMeses);
    
    idadeSemanas=idadeMeses*4;
    printf("\nIdade em semanas = %d", idadeSemanas);
    
    idadeDias=idadeSemanas*7;
    printf("\nIdade em dias = %d", idadeDias);

}
