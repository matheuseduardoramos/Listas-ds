#include <stdio.h>
#include <stdlib.h>
 
int funcao(char *v1, char *v2, int num)
{
    int c = 0;
    for (int i = 0; i < num; i++)
    {
 
        v2[i] = v1[i];
        c++;
        if (v1[i + 1] == ' ' || v1[i + 1] == '\0')
        {
            break;
        }
    }
    return c;
}
 
int main()
{
    int num = 10, resp;
    char v1[10] = {"ola mundo!"}, v2[10];
 
    resp = funcao(&v1, &v2, num);
    printf("%s / %d", v2, resp);
 
    return 0;
}
