/*20. Uma confecção produz X blusas de lã e para isto gasta uma certa quantidade de novelos. Faça
um algoritmo para calcular quantos novelos de lã ela gasta por blusa.*/
#include <stdio.h>

float calcular_novelos_por_blusa(int total_novelos, int total_blusas) {
    if (total_blusas == 0) {
        printf("O número total de blusas não pode ser zero.\n");
        return 0; 
    }
    return (float)total_novelos / total_blusas;
}

int main() {
    int total_novelos, total_blusas;
    
    printf("Digite o número total de novelos de lã: ");
    scanf("%d", &total_novelos);
    
    printf("Digite o número total de blusas produzidas: ");
    scanf("%d", &total_blusas);

    float novelos_por_blusa = calcular_novelos_por_blusa(total_novelos, total_blusas);

    if (total_blusas != 0) {
        printf("Cada blusa utiliza, em média, %.2f novelos de lã.\n", novelos_por_blusa);
    }

    return 0;
}
