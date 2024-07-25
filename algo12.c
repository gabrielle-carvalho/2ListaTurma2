/*12. Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento,
desconte 8% de impostos. Imprima o salário inicial, o salário com o aumento e o salário final.*/
#include<stdio.h>
int main(void){
    float salario, salarioAumento, salarioFinal;
    
    printf("Digite o salário: ");
    scanf("%f", &salario);
    
    salarioAumento = (salario*0.15)+salario;
    salarioFinal = salarioAumento - (salarioAumento*0.08);
    
    printf("Salário inicial = %f , Salário com aumento = %f , Salário Final = %f", salario, salarioAumento, salarioFinal);
}
