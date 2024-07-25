/*22. Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu
poupar. Faça um algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total
economizado, em reais. Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda
moedas de 1 real. Não havendo moeda de um tipo, a quantidade respectiva é zero.*/
#include<stdio.h>
int main(void){
    int moeda1, moeda5, moeda10, moeda25, moeda50, moedaReal;
    float total;
    
    printf("Quantas moedas de 1 centavo? ");
    scanf("%d", &moeda1);
    
    printf("Quantas moedas de 5 centavos? ");
    scanf("%d", &moeda5);
    
    printf("Quantas moedas de 10 centavos? ");
    scanf("%d", &moeda10);
    
    printf("Quantas moedas de 25 centavos? ");
    scanf("%d", &moeda25);
    
    printf("Quantas moedas de 50 centavos? ");
    scanf("%d", &moeda50);
    
    printf("Quantas moedas de 1 real? ");
    scanf("%d", &moedaReal);
    
    total = ((moedaReal*1)+(moeda50*0.50)+(moeda25*0.25)+(moeda10*0.10)+(moeda5*0.05)+(moeda1*0.01));
    
    printf("Valor economizado = %.2f", total);
}
