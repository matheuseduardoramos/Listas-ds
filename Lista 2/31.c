#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, v[10], v2[10], v3[20], igual;
 
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
        v3[i] = v[i];
    }
 
    for (i = 0; i < 10; i++)
    {
        igual = 0;
        for (int j = 0; j < 10; j++)
        {
            if (v3[i] == v2[j])
            {
                igual = 1;
            }
            if (igual == 0)
            {
                v3[(i + 10)] = v2[j];
                break;
            }
        }
    }
 
    for (int i = 0; i < 20; i++)
    {
        printf("%d\n", v3[i]);
    }
    return 0;
}
 
