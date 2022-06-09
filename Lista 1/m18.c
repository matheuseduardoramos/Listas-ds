#include <stdio.h>
#include <stdlib.h>
 
main()
{
 
    int i, j, matriz[3][3], vetor[3] = {0, 0, 0};
 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &matriz[i][j]);
        }
    }
 
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            vetor[j] = vetor[j] + matriz[i][j];
        }
    }
 
    for (i = 0; i < 3; i++)
    {
        printf("\n");
        for (j = 0; j < 3; j++)
        {
            printf("  %d  ",matriz[i][j]);
        }
    }
    printf("\n");
 
    for (i = 0; i < 3; i++)
    {
        printf("%d  ", vetor[i]);
    }
    return 0;
}
 
