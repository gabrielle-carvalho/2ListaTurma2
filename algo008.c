/*8. Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média
ponderada (as notas tem pesos respectivos de 1, 2 e 3)*/
#include<stdio.h>
int main(void){
    float nota1, nota2, nota3, media;
    
    printf("Insira a nota 1: ");
    scanf("%f", &nota1);
    
    printf("Insira a nota 2: ");
    scanf("%f", &nota2);
    
    printf("Insira a nota 3: ");
    scanf("%f", &nota3);
    
    media = ((nota1*1)+(nota2*2)+(nota3*3))/6;
    
    printf("Média = %.2f", media);
}
