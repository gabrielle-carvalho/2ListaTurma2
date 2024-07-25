/*5. Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o
preço do litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no
tanque.*/
#include<stdio.h>
int main(void){
    float precoLitro, valorTotal, litros;
    
    printf("Qual o preço do litro da gasolina? ");
    scanf("%f", &precoLitro);
    
    printf("Qual valor total do pagamento? ");
    scanf("%f", &valorTotal);
    
    litros=valorTotal/precoLitro;
    
    printf("Você conseguiu colocar %.2f litros de gasolina.", litros);
    
}
