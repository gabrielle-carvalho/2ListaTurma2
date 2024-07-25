/*6. O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo
que leia o peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a
balança já desconte o peso do prato*/

#include<stdio.h>

int main(void){
    float peso, preco;
    printf("Qual o preço do seu prato? ");
    scanf("%f", &peso);
    
    preco=peso*12;
    
    printf("O valor total a pagar é: %.2f", preco);
}
