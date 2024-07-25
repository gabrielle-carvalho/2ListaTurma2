//14. Calcule a área de uma pizza que possui um raio R (pi=3.14).
#include<stdio.h>
int main(void){
    float raio, area;
    
    printf("Digite o raio da pizza em centímetros: ");
    scanf("%f", &raio);
    
    area=3.14*(raio*raio);
    printf("A área da pizza é de = %.2f cm", area);
}
