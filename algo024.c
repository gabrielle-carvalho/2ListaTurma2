/*24. Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e de suco são necessários para se fazer X
litros de refresco (informados pelo usuário).*/
#include <stdio.h>

int main() {
    float litros_refresco;
    float litros_agua;
    float litros_suco;

    printf("Digite o número total de litros de refresco: ");
    scanf("%f", &litros_refresco);

    litros_agua = (8.0 / 10.0) * litros_refresco;
    litros_suco = (2.0 / 10.0) * litros_refresco;

    printf("Para fazer %.2f litros de refresco, você precisa de:\n", litros_refresco);
    printf("%.2f litros de água mineral\n", litros_agua);
    printf("%.2f litros de suco de maracujá\n", litros_suco);

    return 0;
}
