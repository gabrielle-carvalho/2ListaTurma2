/*13. Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma:
CENTENA = x
DEZENA = x
UNIDADE = x*/
#include<stdio.h>
int main(void){
    int numero, centena, dezena, unidade;
    
    printf("Digite um número: ");
    scanf("%d", &numero);
    
    if (numero<0 || numero>999){
        printf("Número fora do intervalo permitido");
    }
    
    centena=numero/100;
    dezena=(numero%100)/10;
    unidade=numero%10;
    
    printf("CENTENA = %d", centena);
    printf("\nDEZENA = %d", dezena);
    printf("\nUNIDADE = %d", unidade);
}
