#include <stdio.h>
#include <stdlib.h>

int main()
{
    int magic, t = 0, num;
    srand(time(NULL));
    magic = rand() % 500;

    do
    {
        t++;
        if (t > 10)
        {
            break;
        }
        printf("digite um numero: ");
        scanf("%d", &num);
        if (num > magic)
        {
            printf("Numero digitado foi maior que o numero magico!\n");
        }
        if (num < magic)
        {
            printf("Numero digitado foi menor que o numero magico!\n");
        }

    } while (num != magic);

    if (t <= 3)
    {
        printf("Muito sortudo!");
    }
    if (t > 3 && t < 7)
    {
        printf("Sortudo!");
    }
    if (t > 6 && t <= 10)
    {
        printf("Sorte normal");
    }
    
    if (t > 10)
    {
        printf("tente novamente!");
    }

    return 0;
}
