/*16. A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de
queijo, uma fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou
presunto pesa 50 gramas, e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em
que o dono forneça a quantidade de sanduíches a fazer, e a máquina informe as quantidades (em
quilos) de queijo, presunto e carne necessários para compra.*/
#include<stdio.h>
int main(void){
    int sanduiches;
    float queijo, presunto, hamburguer;
    
    printf("Informe a quantidade de sanduiches a ser feita: ");
    scanf(" %d", &sanduiches);
    
    queijo=(sanduiches*0.05);
    presunto=(sanduiches*0.05);
    hamburguer=(sanduiches*0.10);
    
    printf("Será necessário comprar %.2f kg de queijo, %.2f kg de presunto e %.2f kg de hamburguer.", queijo, presunto, hamburguer);
    
}
