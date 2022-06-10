#include <stdio.h>
#include <stdlib.h>

int fatores(int *v[], int n, int *p)
{
    for (int i = 2; n > 1; i++)
    {

        while (n % i == 0)
        {
            *p += 1;

            if (*p > 10)
            {
                return 1;
            }

            v[*p - 1] = i;
            n = n / i;
        }
    }

    return 0;
}

int main()
{
    int v[10], n, *p = 0, resp;

    scanf("%d", &n);

    resp = fatores(&v, n, p);

    for (int i = 0; i < 10; i++)
    {
        printf("%d\n", v[i]);
    }
    printf("%d", resp);
    return 0;
}
