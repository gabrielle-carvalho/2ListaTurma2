/*18. A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Faça um algoritmo para calcular e imprimir o salário bruto e o salário líquido de um determinado
funcionário. Considere que o salário líquido é igual ao salário bruto descontando-se 10% de
impostos.*/
    #include<stdio.h>
    int main(void){
        float salarioLiquido, salarioBruto;
        int horaNormal, horaExtra;
        
        printf("Quantas horas normais foram trabalhadas? ");
        scanf("%d", &horaNormal);
        
        printf("Quantas horas extra foram trabalhadas? ");
        scanf("%d", &horaExtra);
        
        salarioBruto=((horaExtra*15)+(horaNormal*10));
        salarioLiquido=(salarioBruto-(salarioBruto*0.10));
        
        printf("O salário bruto é = R$ %.2f e o salário líquido = R$ %.2f", salarioBruto, salarioLiquido);
    }
