#include <stdio.h>
#include <math.h>

int main()
{
    float v, g = 9.81, dmax, teta;

    printf("Digite a velocidade inicial do objeto [m/s]: ");
    scanf("%f", &v);
    printf("Digite o angulo do lancamento: ");
    scanf("%f",&teta);

    
    dmax = ((v * v) / g) * sin(teta * 2);

    printf("Dmax = %.1f metros",dmax);
    return 0;
}
