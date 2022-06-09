#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, v[10], v2[10], v3[10], iv3 = 0;
 
    for (i = 0; i < 10; i++)
    {
        printf("digite um numero[%d]: ", i + 1);
        scanf("%d", &v[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("digite um numero[%d]: ", i + 1);
        scanf("%d", &v2[i]);
    }
 
    for (i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (v[i] == v2[j])
            {
                v3[iv3] = v[i];
                iv3++;
                break;
            }
        }
    }
 
    for (int i = 0; i < iv3; i++)
    {
        printf("%d\n", v3[i]);
    }
    return 0;
}
