#include <stdio.h>
#include <stdlib.h>
int main()
{
    int x, y, z;

    printf("Digite 3 valores inteiros: ");
    scanf("%d %d %d", &x, &y, &z);

    if (((abs(z-y)< x) && (x < y + z)) || ((abs(z-x)< y) && (y < x + z)) || ((abs(x-y)< z) && (z < y + x))) 
    {
        printf("Os valores formam um triangulo ");
        if ((x == y) && (x == z))
        {
            printf("equilatero!");
        }
        if ((x != y) && (x != z) && (z != y))
        {
           printf("escaleno!");
        }
        if (((x == y) && (x != z)) || ((z == y) && (z != x)) || ((z == x) && (z != y)))
        {
            printf("isosceles!");
        }
    }
    else
    {
        printf("Os valores nao formam um trinagulo!");
    }
    return 0;
}

