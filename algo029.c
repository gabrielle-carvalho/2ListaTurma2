/*29. Faça um algoritmo que receba o preço de um produto, calcule e 
mostre o novo preço,sabendo-se que este sofreu um desconto de 10%.*/

#include<stdio.h>
int main(void){
    float produto;
    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    
    produto=produto-(produto*0.10);
    
    printf("Preço final = %.2f", produto);
}
