/*26. Faça um algoritmo que receba três números, calcule e mostre a 
multiplicação desses números.*/
#include<stdio.h>
int main(void){
    float num1, num2, num3, resultado;
    printf("Digite o primeiro numero: ");
    scanf("%f", &num1);
    
    printf("Digite o segundo numero: ");
    scanf("%f", &num2);

    printf("Digite o terceiro numero: ");
    scanf("%f", &num3);
    
    resultado=num3*num2*num1;

    printf("Resultado = %.2f", resultado);
}
