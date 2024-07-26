/*23. Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente
longa. Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre
da sua altura, faça um algoritmo para ler os dados necessários e calcular a altura do prédio.*/
#include <stdio.h>

int main() {
    float altura_objeto, sombra_objeto, sombra_predio;
    float altura_predio;

    printf("Digite a altura do objeto conhecido (em metros): ");
    scanf("%f", &altura_objeto);

    printf("Digite o comprimento da sombra do objeto conhecido (em metros): ");
    scanf("%f", &sombra_objeto);

    printf("Digite o comprimento da sombra do prédio (em metros): ");
    scanf("%f", &sombra_predio);

    altura_predio = (altura_objeto * sombra_predio) / sombra_objeto;

    printf("A altura do prédio é: %.2f metros\n", altura_predio);

    return 0;
}
