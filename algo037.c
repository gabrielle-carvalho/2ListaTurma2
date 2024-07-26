/*37. Faça um algoritmo que calcule e mostre a tabuada de um
número digitado pelo usuário.*/
#include<stdio.h>
int main(void){
    int num, multiplicando=0, cont, resultado;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    while(cont<10){
    multiplicando++;
    resultado=num*multiplicando;
    cont++;
    printf("\n %d X %d = %d", multiplicando, num, resultado);
    }

}
