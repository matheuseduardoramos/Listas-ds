#include <stdio.h>
#include <stdlib.h>
 
main()
{
    int matriz[5][5], i, j, k, m, aux;
 
    srand(time(NULL));
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            do
            {
                aux = 0;
                matriz[i][j] = rand() % 100;
                for (k = 0; k < i; k++)
                {
                    for (m = 0; m < j; m++)
                    {
                        if (matriz[i][j] == matriz[k][m])
                        {
                            aux++;
                        }
                    }
                }
 
            } while (aux != 0);
        }
    }
    printf("\nCARTELA\n");
    for (i = 0; i < 5; i++)
    {
        printf("\n");
        for (j = 0; j < 5; j++)
        {
            printf(" %d ", matriz[i][j]);
        }
    }
 
    return 0;
}
 
