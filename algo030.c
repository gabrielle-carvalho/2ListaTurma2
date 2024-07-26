/*30. Um funcionário recebe um salário fixo mais 4% de comissão sobre as
vendas. Faça um algoritmo que receba o salário fixo de um funcionário e o
valor de suas vendas, calcule e mostre acomissão e o salário final do funcionário.*/

#include<stdio.h>
int main(void){
    float salarioFixo, valorVendas, comissao, salarioFinal;
    
    printf("Digite o salário fixo: ");
    scanf("%f", &salarioFixo);
    
    printf("Digite o valor das vendas: ");
    scanf("%f", &valorVendas);
    
    comissao=valorVendas*0.04;
    salarioFinal=salarioFixo+comissao;
    
    printf("Salário Final = %.2f", salarioFinal);
    
}
