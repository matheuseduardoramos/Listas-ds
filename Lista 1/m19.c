#include <stdio.h>
#include <stdlib.h>
 
main()
{
 
    int i, j, matriz[5][4], maiornf = 0, maiormat;
    float mnf = 0;
 
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 3; j++)
        {
            switch (j)
            {
            case 0:
                printf("Matricula: ");
                break;
 
            case 1:
                printf("media provas: ");
                break;
 
            case 2:
                printf("Media trabalhos: ");
                break;
 
            default:
                break;
            }
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < 5; i++)
    {
        matriz[i][3] = matriz[i][2] + matriz[i][1];
        if (maiornf < matriz[i][3])
        {
            maiornf = matriz[i][3];
            maiormat = matriz[i][0];
        }
        mnf += matriz[i][3];
    }
    mnf = (mnf/(float)5);
 
    printf("Aluno com maior media final: %d\n", maiormat);
    printf("media das medias finais: %.1f", mnf);
    return 0;
}
 
