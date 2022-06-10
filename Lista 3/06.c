#include <stdio.h>
#include <stdlib.h>
 
void maior(int *a, int *b, int *c)
{
    int aux;
    if (*a > *b && *b > *c)
    {
        aux = *c;
        *c = *a;
        *a = aux;
    }
    if (*c > *a && *a > *b)
    {
        aux = *b;
        *b = *a;
        *a = aux;
    }
    if (*b > *a&& *a > *c)
    {
        aux = *a;
        *a = *c;
        *c = aux;
        *c = *b;
        *b = aux;
    }
}
 
int main()
{
    int a,b,c;
scanf("%d,%d,%d",a,b,c);
    maior(&a, &b, &c);
    printf("A = %d B = %d C = %d",a,b,c);
 
    return 0;
}
