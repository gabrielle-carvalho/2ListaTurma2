/*19. A granja Frangotech possui um controle automatizado de cada frango da sua produção. No pé
direito do frango há um anel com um chip de identificação; no pé esquerdo são dois anéis para
indicar o tipo de alimento que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o
anel de alimento custa R$3,50, faça um algoritmo para calcular o gasto total da granja para marcar
todos os seus frangos*/
#include<stdio.h>
int main(void){
    int frangos;
    float identificacao, alimento, total;
    
    printf("Quantos frangos a granja tem? ");
    scanf("%d", &frangos);
    
    identificacao=frangos*4;
    alimento=frangos*3.50*2;
    total=identificacao+alimento;
    
    printf("Gasto total da granja = %.2f", total);
    
}
