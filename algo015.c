/*15. Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um
algoritmo para ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que
Carlos e André não paguem centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para
Carlos, R$33,00 para André e R$35,53 para Felipe.*/
#include<stdio.h>
int main(void){
    float total, resto, inteiro, felipe;
    
    printf("Qual é o valor da conta? ");
    scanf("%f", &total);
    
    inteiro = (int) total/3;
   	resto = (total-((int)total));
   	felipe = inteiro+resto;
   	
   	printf("Carlos = %.2f", inteiro);
   	printf("\nAndré = %.2f", inteiro);
   	printf("\nFelipe = %.2f", felipe);
}
