/*40. Faça um algoritmo que receba o valor dos catetos de um triângulo, calcule e mostre o valor da
hipotenusa.*/
#include<stdio.h>
int main(void){
    float cateto1, cateto2, hipotenusa;
    printf("Insira o primeiro cateto: ");
    scanf("%f", &cateto1);
    
    printf("Insira o segundo cateto: ");
    scanf("%f", &cateto2);
    
    hipotenusa=((cateto2*cateto2)+(cateto1*cateto1));
    
    printf("hipotenusa = %.2f", hipotenusa);
    
}
