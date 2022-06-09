#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, op;
    float vetor[5];
 
    for (i = 0; i < 5; i++)
    {
        printf("Digite o %d termo do vetor: ", i + 1);
        scanf("%f", &vetor[i]);
    }
    do
    {
        printf("1 - ordem direta\n2 - ordem inversa\n0 - sair: ");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            for (i = 0; i < 5; i++)
            {
                printf("%f\n",vetor[i]);
            }
 
            break;
        case 2:
            for (i = 4; i >= 0; i--)
            {
                printf("%f\n",vetor[i]);
            }
 
            break;
        case 0:
            break;
        default:
 
            printf("opcao invalida!\n");
            break;
        }
 
    } while (op != 0);
    printf("fim do programa");
    return 0;
}
