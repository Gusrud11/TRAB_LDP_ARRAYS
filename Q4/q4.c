#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");
    int matriz1[3][3], matriz2[3][3], matriz3[3][3];
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("digite o valor da matriz 1 na linha %d e coluna %d: ",i+1,j+1);
            scanf("%d",&matriz1[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("digite o valor da matriz 2 na linha %d e coluna %d: ",i+1,j+1);
            scanf("%d",&matriz2[i][j]);
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            matriz3[i][j]=matriz1[i][j]+matriz2[i][j];
        }
    }
    printf("A matriz 3 é:\n");
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("%d ",matriz3[i][j]);
        }
        printf("\n");
    }
}