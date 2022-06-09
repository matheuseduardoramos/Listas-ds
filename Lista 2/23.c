#include <stdlib.h>
#include <stdio.h>

int main()
{
    int i,num;
    scanf("%d",&num);
    printf("Decompondo %d\n",num);
    for ( i = 2; num > 1; i++)
    {
        
        while (num % i == 0)
        {
            printf("%d\n",i);
            num = num/i;
        }
        
    }
    

    return 0;
}
