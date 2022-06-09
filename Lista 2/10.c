#include <stdlib.h>
#include <stdio.h>

int main()
{
    int vmax, vcarro, multa;

    printf("digite a velocidade maxima da via: ");
    scanf("%d",&vmax);
    printf("digite a velocidade do carro: ");
    scanf("%d",&vcarro);

    if(vcarro <= vmax)
    {
        printf("nao houve multa");
    }
    else
    {
        multa = (vcarro - vmax) * 5;
        printf("O valor da multa: %d reais",multa);
        
    }
    return 0;
}

