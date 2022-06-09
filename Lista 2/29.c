#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num, c = 0, soma = 0;
    float media;
    do
    {
        scanf("%d", &num);
        if (num < 0)
        {
            break;
        }
        soma += num;
        c++;

    } while (num >= 0);
    media = soma / (float)c;

    printf("media: %.2f", media);

    return 0;
}
