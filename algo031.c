/*31. Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso se a pessoa emagrecer 20% sobre o peso digitado.*/
#include<stdio.h>
int main(void){
    float peso, peso15, peso20;
    printf("Digite o peso: ");
    scanf("%f", &peso);
    
    peso15 = peso+(peso*0.15);
    peso20 = peso-(peso*0.20);
    
    printf("a) Peso se a pessoa engordar = %.2f b) Peso se a pessoa emagrecer %.2f ", peso15, peso20);
}
