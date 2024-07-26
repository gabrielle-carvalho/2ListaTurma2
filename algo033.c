/*33. Faça um algoritmo que calcule e mostre a área de um trapézio.
Sabe-se que: A = (base maior +base menor)* altura)/2 ;*/
#include<stdio.h>
int main(void){
    float area, baseMaior, baseMenor, altura;
    printf("Digite o tamanho da base maior: ");
    scanf("%f", &baseMaior);
    
    printf("Digite o tamanho da base menor: ");
    scanf("%f", &baseMenor);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);
    
    area=((baseMaior +baseMenor)*altura)/2;
    printf("Área = %.2f ", area);
}
