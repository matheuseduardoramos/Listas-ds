#include <stdio.h>
#include <stdlib.h>
 
main()
{
    char matriz[5][10], vetor[10];
    int i, j,nota;
    printf("GABARITO: \n");
    for (j = 0; j < 10; j++)
    {
        scanf("%s", &vetor[j]);
    }
    printf("Resposta dos Alunos: \n");
    for (i = 0; i < 5; i++)
    {
        printf("ALUNO %d:\n",i+1);
        for (j = 0; j < 10; j++)
        {
            scanf("%s", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        nota=0;
        for (j = 0; j < 10; j++)
        {
            if (vetor[j]==matriz[i][j])
            {
                nota++;
            }
   
        }
        printf("Aluno %d - nota: %d\n",i+1,nota);
    }
   
    return 0;
}
 
