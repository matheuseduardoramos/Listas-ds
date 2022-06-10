#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int v[10] = {2, 4, 35, 50, 23, 17, 9, 12, 27, 5};
    int maior = 0, menor = 99, aux;
 
    // a e b
    for (int i = 0; i < 10; i++)
    {
        if (v[i] > maior)
        {
            maior = v[i];
        }
        if (v[i] < menor)
        {
            menor = v[i];
        }
    }
    printf("maior = %d,menor =%d\n", maior, menor);
    // c
    for (int i = 1; i < 10; i++)
    {
 
        for (int j = 0; j < 9; j++)
        {
 
            if (v[j] > v[j + 1])
            {
                aux = v[j];
                v[j] = v[j + 1];
                v[j + 1] = aux;
            }
        }
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    // d
    for (int i = 0; i < 10; i++)
    {
        int d = 0;
        for (int j = 2; j <= (v[i] / 2); j++)
        {
            if (v[i] % j == 0)
            {
                d++;
                break;
            }
        }
        if (d == 0)
        {
 
            printf("%d\n", v[i]);
        }
    }
}
 
