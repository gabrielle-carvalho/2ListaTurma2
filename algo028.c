/*28. Faça um algoritmo que receba duas notas, calcule e mostre a média p
onderada dessas notas,
considerando peso 2 para a primeira nota e peso 3 para a segunda nota.*/

#include<stdio.h>
int main(void){
    float nota1, nota2, media;
    printf("Digite a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Digite a nota 2: ");
    scanf("%f", &nota2);
    
    media= ((nota1*2)+(nota2*3))/5;
    printf("Média: %.2f", media);
}
