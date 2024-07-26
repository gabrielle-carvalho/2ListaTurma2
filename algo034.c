/*34. Faça um algoritmo que calcule e mostre a área de um quadrado.
Sabe-se que: A = lado * lado;*/
#include<stdio.h>
int main(void){
    float area, lado1, lado2;
    printf("Digite o tamanho do lado: ");
    scanf("%f", &lado1);
    
    printf("Digite o tamanho do lado: ");
    scanf("%f", &lado2);
    
    area=(lado2 * lado1);
    printf("Área = %.2f ", area);

}
