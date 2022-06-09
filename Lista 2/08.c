#include <stdio.h>
#include <stdlib.h>
int main()
{
    float nota1, nota2, media, notaexame, mediaf;
    do
    {
        printf("digite suas duas notas [0 - 100]: ");
        scanf("%f %f", &nota1, &nota2);
    } while (((nota1 < 0) || (nota1 > 100)) || ((nota2 < 0) || (nota2 > 100)));

    media = ((nota1 + nota2) / 2);

    if (media >= 70)
    {
        printf("Aprovado por media!");
    }
    if ((media >= 40) && (media < 70))
    {
        printf("Exame final!\n");
        printf("digite sua nota no exame final: ");
        scanf("%f", &notaexame);
        mediaf = media + notaexame;
        if (mediaf >= 100)
        {
            printf("aprovado no exame final!");
        }
        else
        {
            printf("reprovado no exame final!");
        }
    }

    if (media <40)
    {
        printf("Reprovado");
    }

    return 0;
}
