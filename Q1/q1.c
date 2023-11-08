#include <stdio.h>
#include <stdlib.h>

int main(){
    int num[15], n;
    for(int i=0; i<15; i++){
        printf("digite o numero %d: ",i+1);
        scanf("%d",&num[i]);
    }
    printf("digite um numero para encontra-lo no vetor: ");
    scanf("%d",&n);
    for(int i=0; i<15; i++){
        if(num[i]==n){
            printf("O numero %d esta na posicao %d do vetor\n",n,i);
            return 0;
        }
    }
}