#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int i, vetor[100];
    for (int j = 0; j < 500; j++)
    {
        for (i = 0; i < 100; i++)
        {
            if (i % 10 == 7 && i % 7 != 0)
            {
                vetor[i] = j;
            }
        }
    }
    for (i = 0; i < 100; i++)
    {
        printf("%d\n",vetor[i]);
       
    }
    return 0;
}
 
