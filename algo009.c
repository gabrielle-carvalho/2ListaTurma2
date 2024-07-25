/*9. Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo
vendida respectivamente por 10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a
quantidade de camisetas pequenas, médias e grandes referentes a uma venda, e a máquina
informe quanto será o valor arrecadado.*/

#include<stdio.h>
int main(void){
    int pequenas,medias,grandes, total;
    printf("Quantas camisas pequenas foram vendidas? ");
    scanf("%d", &pequenas);
    
    printf("Quantas camisas médias foram vendidas? ");
    scanf("%d", &medias);
    
    printf("Quantas camisas grandes foram vendidas? ");
    scanf("%d", &grandes);
    
    total=(pequenas*10)+(medias*12)+(grandes*15);
    
    printf("O valor arrecadado será: %d ", total);
    
}
