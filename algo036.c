/*36. Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário,
calcule e mostre a quantidade de salários mínimos que ganha esse funcionário.*/
#include<stdio.h>
int main(void){
    float salarioMinimo, salarioFunc, resultado;
    printf("qual é o valor do salário mínimo? ");
    scanf("%f", &salarioMinimo);
    printf("qual é o valor do salário do funcionário? ");
    scanf("%f", &salarioFunc);
    
    resultado=(100*salarioFunc)/salarioMinimo;
    
    printf("o funcionário recebe %.2f salário mínimos ", resultado);
}
