#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int VM[12], soma=0, media=0;
    for(int i=0; i<12; i++){
        printf("digite o valor de vendas do %dº mês : ",i+1);
        scanf("%d",&VM[i]);
    }
    for(int i=0; i<12; i++){
        soma=soma+VM[i];
    }
    media=soma/12;
    for(int i=0; i<12; i++){
        if(VM[i]>media){
            printf("O mês %d teve vendas acima da média, com valor de %d reais\n",i+1,VM[i]);
        }else if(VM[i]<media){
            printf("O mês %d teve vendas abaixo da média, com valor de %d reais\n",i+1,VM[i]);
        }else{
            printf("O mês %d teve vendas igual a média, com valor de %d reais\n",i+1,VM[i]);
        }
    }
    return 0;
}