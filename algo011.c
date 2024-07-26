/*11. Uma fábrica controla o tempo de trabalho sem acidentes pela quantidade de dias. Faça um
algoritmo para converter este tempo em anos, meses e dias. Assuma que cada mês possui sempre
30 dias.*/
#include <stdio.h>

typedef struct {
    int anos;
    int meses;
    int dias;
} Tempo;

Tempo converter_tempo(int total_dias) {
    Tempo resultado;
    resultado.anos = total_dias / 365;
    int dias_restantes = total_dias % 365;
    resultado.meses = dias_restantes / 30;
    resultado.dias = dias_restantes % 30;
    return resultado;
}

int main() {
    int total_dias;
    
    printf("Digite o número total de dias: ");
    scanf("%d", &total_dias);

    Tempo resultado = converter_tempo(total_dias);

    printf("%d dias correspondem a %d anos, %d meses e %d dias.\n", total_dias, resultado.anos, resultado.meses, resultado.dias);

    return 0;
}
