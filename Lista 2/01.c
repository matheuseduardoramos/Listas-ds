#include <stdio.h>

int main()
{
    int tempo, h = 0, min = 0, s = 0 ;

    printf("digite o tempo em segundos: ");
    scanf("%d", &tempo);

    do
    {
        h++;
        tempo -= 3600;

    } while (tempo >= 3600);

    while (tempo >= 60)
    {
        min++;
        tempo -= 60;
    
    }
    
   

    if (tempo < 60)
    {
        s = tempo;
    }

    printf("O tempo digitado corresponde a: \n");
    printf("Hora(s)\t\t%d\nMinuto(s)\t%d\nSegundo(s)\t%d",h,min,s);

    return 0;
}
