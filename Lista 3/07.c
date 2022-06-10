#include <stdio.h>
#include <stdlib.h>
 
void calcula(int *x, int *y)
{
    int aux;
    aux = *x;
    *x = *x + *y;
    *y = aux * *y;
}
 
int main()
{
    int x = 10, y = 20;
 
    calcula(&x,&y);
    printf("x = %d y = %d",x,y);
 
    return 0;
}
