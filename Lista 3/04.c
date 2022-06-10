#include <stdio.h>
#include <stdlib.h>
//nao entendi
int main()
{
    int *p, a = 0, b, c, d, x;
    float e, f, g, h;
    char v[10]= {"OLA MUNDO"};
    return 0;
    p = &a;
 
    for (int i = 0; i < 100; i++)
    {
        printf("%d", *(p+i));
        if ( p + i == &b || p + i == &c || p + i == &d || p + i == &e ||p+i == &f ||p+i == &g ||p+i == &h ||p+i == &x ||p+i == &v)
        {
            printf("endereco encontrado");
        }
    }
}
