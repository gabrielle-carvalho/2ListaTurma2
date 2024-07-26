/*25. Calcule o volume de uma caixa d'água cilíndrica.*/
#include<stdio.h>
int main(void){
    float raio, altura, volume;
    
    printf("Digite o raio: ");
    scanf("%f", &raio);
    
    printf("Digite a altura: ");
    scanf("%f", &altura);

    volume=(3.14*(raio*raio)*altura);

    printf("Resultado = %.2f", volume);
}
