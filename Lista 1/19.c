
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, vetor[50];

    for (i = 0; i < 50; i++)
    {
        vetor[i] = (i + 5 * i) % (i + 1);
    }
    for (i = 0; i < 50; i++)
    {
        printf("%d\n", vetor[i]);
    }

    return 0;
}
