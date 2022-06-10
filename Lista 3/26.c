#include <stdio.h>
#include <stdlib.h>
int pesquisa(int v[],int valor)
{
    
    for (int i = 0; i < 7; i++)
    {
        if (v[i] == valor)
        {
            return i;
        }
        
    }
    return -1;
}
void vetorsoma(int *v)
{
    int aux[7],i,j,soma;
    for ( i = 0; i < 7; i++)
    {
        aux[i] = v[i];
    }
    for ( i = 0; i < 7; i++)
    {
        soma = 0;
        for ( j = 0; j <= i; j++)
        {
            soma += aux[j];
        }
        v[i] = soma;
    }
    return;
}
int main()
{
    int valor,resp, v[7];
    for (int i = 0; i < 7; i++)
    {
        scanf("%d", &v[i]);
    }

    for (int i = 0; i < 7; i++)
    {
        scanf("ELEMENTO [%d]:  %d\n", i, v[i]);
    }
    printf("Qual valor deseja buscar: ");
    scanf("%d",&valor);
    resp = pesquisa(v,valor);
    printf("%d\n",resp);
    printf("VETOR SOMA\n");
    vetorsoma(&v);
    
    for (int i = 0; i < 7; i++)
    {
        printf("%d\n",v[i]);
    }
    return 0;
}
