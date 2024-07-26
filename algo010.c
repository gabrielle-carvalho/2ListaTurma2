//10. Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada
//ponto é um par ordenado (x,y).
#include <stdio.h>
#include <math.h> 

float calcularDistancia(float x1, float y1, float x2, float y2) {
    float delta_x = x2 - x1;
    float delta_y = y2 - y1;
    float distancia = sqrt(delta_x * delta_x + delta_y * delta_y);
    return distancia;
}

int main() {
    float x1, y1, x2, y2;

    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%f %f", &x1, &y1);
    
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    float distancia = calcularDistancia(x1, y1, x2, y2);

    printf("A distância entre os pontos é: %.2f\n", distancia);

    return 0;
}
