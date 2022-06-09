#include <stdio.h>
#include <stdlib.h>

int situacao_aluno(int media, int faltas, int haula)
{
    float f = (faltas / (float)haula) * 100;

    if (media >= 60 && f < 25)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n, f, ha, resp;
    printf("nota,faltas,hora-aula: ");
    scanf("%d%d%d", &n, &f, &ha);
    resp = situacao_aluno(n, f, ha);
    if (resp == 1)
    {
        printf("aprovado!");
    }
    else
    {
        printf("Reprovado!");
    }

    return 0;
}
