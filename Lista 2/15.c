#include <stdio.h>
#include <stdlib.h>

float impostoderenda(float salario)
{
    float imposto;

    if (salario <= 1637.11)
    {
        imposto = 0;
    }
    if ((salario >= 1637.12) && (salario <=  2453.50))
    {
        imposto = (salario * 0.075) - 122.78;
    }
    if ((salario >= 2453.51) && (salario <=  3271.38))
    {
        imposto = (salario * 0.15) - 306.80;
    }
    if ((salario >= 3271.39) && (salario <=  4087.65))
    {
        imposto = (salario * 0.225) - 552.15;
    }
    if (salario > 4087.65)
    {
        imposto = (salario * 0.275) - 756.53;
    }
    
    return imposto;
}

int main()
{
    float salario, imposto;

    printf("digite seu salario: ");
    scanf("%f", &salario);

    imposto = impostoderenda(salario);

    if (imposto == 0)
    {
        printf("livre de imposto");
    }
    else
    {
        printf("imposto a pagar: R$:%.2f",imposto);
    }


    return 0;
}
