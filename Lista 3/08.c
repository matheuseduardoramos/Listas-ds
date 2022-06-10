#include <stdio.h>
#include <stdlib.h>

int divs(int *min, int *max, int num)
{
    int div = 0, i;
    for (int i = 2; i <= (num / 2); i++)
    {
        if ((num % i) == 0)
        {
            div++;
            break;
        }
    }
    if (div == 0)
    {
        return 0;
    }
    else
    {
        for (i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
                *min = i;
            break;
        }

        for (i = 2; i <= (num / 2); i++)
        {
            if (num % i == 0)
            {
                *max = i;
            }
        }

        return 1;
    }
}

int main()
{
    int min, max, num = 70, resp;

    resp = div(&min, &max, num);

    return 0;
}
