#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int v[10], p[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}, im[10] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        if (v[i] % 2 == 0)
        {
            p[i] = v[i];
        }
        else
        {
            im[i] = v[i];
        }
    }
    printf("vetor incial:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n",v[i]);
    }
    printf("vetor impar:\n");
    for (int i = 0; i < 10; i++)
    {
        if (im[i] != 0)
        {
            printf("%d\n", im[i]);
        }
    }
    printf("vetor par:\n");
    for (int i = 0; i < 10; i++)
    {
        if (p[i] != 0)
        {
            printf("%d\n", p[i]);
        }
    }
}
