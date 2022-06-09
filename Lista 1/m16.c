#include <stdio.h>
#include <stdlib.h>
 
main()
{
    char matriz[3][10], vetor[10], matricula[3];
    int i, j, nota;
    float paprovacao = 0;
    printf("GABARITO: \n");
    for (j = 0; j < 10; j++)
    {
        scanf("%s", &vetor[j]);
    }
    printf("Resposta dos Alunos: \n");
    for (i = 0; i < 3; i++)
    {
        printf("Matricula:");
        scanf("%d", &matricula[i]);
        for (j = 0; j < 10; j++)
        {
            scanf("%s", &matriz[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        nota = 0;
        for (j = 0; j < 10; j++)
        {
            if (vetor[j] == matriz[i][j])
            {
                nota++;
            }
        }
        if (nota >= 7)
        {
            paprovacao += 1;
        }
        printf("Aluno %d - nota: %d\n", matricula[i], nota);
    }
    paprovacao = (paprovacao / 3) * 100;
    printf("Foram aprovados: %%%.2f dos alunos", paprovacao);
    return 0;
}
