#include <stdio.h>
#include <stdlib.h>

int main()
{
    int notas[4][4], disA, disR, soma1 = 0, soma2 = 0, soma3 = 0, soma4 = 0;
    float media1, media2, media3, media4;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("digite a nota do aluno na prova %d na disciplina %d: ", j + 1, i + 1);
            scanf("%d", &notas[i][j]);
        }
    }
    for (int i = 0; i < 4; i++)
    {
        soma1 = soma1 + notas[0][i];
    }
    media1 = soma1 / 4;
    for (int i = 0; i < 4; i++)
    {
        soma2 = soma2 + notas[1][i];
    }
    media2 = soma2 / 4;
    for (int i = 0; i < 4; i++)
    {
        soma3 = soma3 + notas[2][i];
    }
    media3 = soma3 / 4;
    for (int i = 0; i < 4; i++)
    {
        soma4 = soma4 + notas[3][i];
    }
    media4 = soma4 / 4;
    if (media1 > 7)
    {
        disA++;
    }
    else
    {
        disR++;
    }
    if (media2 > 7)
    {
        disA++;
    }
    else
    {
        disR++;
    }
    if (media3 > 7)
    {
        disA++;
    }
    else
    {
        disR++;
    }
    if (media4 > 7)
    {
        disA++;
    }
    else
    {
        disR++;
    }
    if (disA == 0)
    {
        printf("o aluno foi reprovado em todas as disciplinas");
    }
    else if (disR == 0)
    {
        printf("o aluno foi aprovado em todas as disciplinas");
    }
    else
    {
        printf("o aluno foi aprovado em %d disciplinas e reprovado em %d disciplinas", disA, disR);
    }
}