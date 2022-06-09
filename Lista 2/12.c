#include <stdlib.h>
#include <stdio.h>

int main()
{
    int saque = 0, c100=0,c50=0,c20=0,c10=0,c5=0,c2=0,c1=0;

    printf("digite o valor que deseja sacar: R$:");
    scanf("%d",&saque);

     while (saque>=100)
    {
        c100++;
        saque-=100;
    }
    
    
     while (saque>=50)
    {
        c50++;
        saque-=50;
    }
    
    while (saque>=20)
    {
        c20++;
        saque-=20;
    } 
    
    while (saque>=10)
    {
        c10++;
        saque-=10;
    } 
    
    
     while (saque>=5)
    {
        c5++;
        saque-=5;
    }
    
    while (saque>=2)
    {
        c2++;
        saque-=2;

    } 
    c1 = saque;

    printf("cedulas de 100\t%d\ncedulas de 50\t%d\ncedulas de 20\t%d\ncedulas de 10\t%d\ncedulas de 5\t%d\ncedulas de 2\t%d\ncedulas de 1\t%d\n",c100,c50,c20,c10,c5,c2,c1);
    return 0;
}
