#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int vetor[8], maior=0, menor=0;
    for(int i=0; i<8; i++){
        printf("digite o %dº numero: ",i+1);
        scanf("%d",&vetor[i]);
    }
    maior=vetor[0];
    for(int i=0; i<8; i++){
        if(vetor[i]>maior){
            maior=vetor[i];
        }
    }
    menor=vetor[0];
    for(int i=0; i<8; i++){
        if(vetor[i]<menor){
            menor=vetor[i];
        }
    }
    printf("O maior numero é %d e o menor numero é %d\n",maior,menor);
}