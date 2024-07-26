/*35. Faça um algoritmo que calcule e mostre a área de um losango. 
Sabe-se que: A = (diagonal_maior * diagonal_menor)/2;*/
#include<stdio.h>
int main(void){
    float area, diagonalMaior, diagonalMenor;
    printf("Digite o tamanho da diagonal maior: ");
    scanf("%f", &diagonalMaior);
    
    printf("Digite o tamanho da diagonal menor: ");
    scanf("%f", &diagonalMenor);
    
    area=(diagonalMaior * diagonalMenor)/2;
    printf("Área = %.2f ", area);

}
