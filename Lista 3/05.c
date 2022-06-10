#include <stdio.h>
#include <stdlib.h>
 
int check(int a, int b)
{
    if (a == b)
    {
        return 1;
    }
    if (a != b)
    {
        return 0;
    }
    if (a + b > 4294967295 || a * b > 4294967295 )
    {
        return -1;
    }
   
}
 
int main()
{
    int a, b,resp;
    scanf("%d,%d",&a,&b);
    resp = check(a,b);
    printf("%d");
   
    return 0;
}
 

