/*32. Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso
em gramas.*/
#include<stdio.h>
int main(void){
    float peso;
    printf("Digite o peso em quilos: ");
    scanf("%f", &peso);
    
   peso=peso*1000;
   
   printf("Peso em gramas = %.2f ", peso);
}
