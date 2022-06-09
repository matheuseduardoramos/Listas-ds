#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int meta = pow(10,8),plant = 150,colheita , t=1;

    while (colheita <= meta)
    {
        
        t++;
        colheita = (plant * 0.9) * 2;
        plant = colheita;
    }
    printf("%d anos",t);
    return 0;
}

