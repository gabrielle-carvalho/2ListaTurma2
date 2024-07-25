/*21. A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml,
garrafa de 600 ml e garrafa de 2 litros. Se um comerciante compra uma determinada quantidade
de cada formato, faça um algoritmo para calcular quantos litros de refrigerante ele comprou.*/
    #include<stdio.h>
    int main(void){
        int lata, garrafa, garrafao;
        float total;
        
        printf("Quantas latas de 350 ml de refrigerante foram compradas? ");
        scanf("%d", &lata);
        
        printf("Quantas garrafas de 600 ml de refrigerante foram compradas? ");
        scanf("%d", &garrafa);
        
        printf("Quantas garrafas de 2l de refrigerante foram compradas? ");
        scanf("%d", &garrafao);
        
        total=((lata*0.35)+(garrafa*0.60)+(garrafao*2));
        
        printf("Total = %.5f", total);
    }
