/*39. João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e
C2=R$120,00) que estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de
2% sobre cada conta. Faça um algoritmo que calcule e mostre quanto restará do salário do João*/
#include<stdio.h>
int main(void){
    float salario=1200, conta1, conta2, resto;
    
    conta2=(200+(200*0.02));
    conta1=(120+(120*0.02));
    
    
    resto=salario-conta1-conta2;
    
    printf("Sobrará = %.2f", resto);
}
