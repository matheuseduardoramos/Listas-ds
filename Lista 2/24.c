#include <stdlib.h>
#include <stdio.h>

int main()
{

    int num, num2, resto, aux;
    do
    {

        scanf("%d", &num);
        scanf("%d", &num2);
        if (num == 0 && num == 0)
        {
            break;
        }
        
        if (num > num2)
        {
            aux = num;
            num = num2;
            num2 = aux;
        }

        do
        {
            resto = num%num2;
            num = num2;
            num2 = resto;
        } while (resto != 0);

        printf("%d\n",num);
        num =-1;
        num2 = -1;

    } while (num != 0 && num2 != 0);

    return 0;
}
