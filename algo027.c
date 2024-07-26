/*27. Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número
pelo segundo. Sabe-se que o segundo número não pode ser zero, portanto não é necessário se
preocupar com validações.*/
#include<stdio.h>
int main(void){
    float num1, num2, divisao;
    printf("digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("digite o segundo numero: ");
    scanf("%f", &num2);
    
    divisao=num1/num2;
    printf("%.2f / %.2f = %.2f", num1, num2, divisao);
}
