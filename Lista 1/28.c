#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, v[10], v1[10], v2[10];
 
    for (i = 0; i < 10; i++)
    {
        do
        {
            printf("Digite um numero diferente de 0[%d]: ", i + 1);
            scanf("%d", &v[i]);
 
        } while (v[i] == 0);
    }
 
    for (i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            v2[i] = v[i];
        }
        else
        {
            v2[i] = 0;
        }
        if (v[i] % 2 == 1)
        {
            v1[i] = v[i];
        }
        else
        {
            v1[i] = 0;
        }
    }
    printf("Vetor impar\n");
    for (i = 0; i < 10; i++)
    {
        if (v1[i] % 2 == 1)
        {
            printf("%d\n", v1[i]);
        }
    }
 
    printf("Vetor par\n");
 
    for (i = 0; i < 10; i++)
    {
        if (v2[i] % 2 == 0 && v2[i] != 0)
        {
            printf("%d\n", v2[i]);
        }
    }
 
    return 0;
}
