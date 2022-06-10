#include <stdio.h>
#include <stdlib.h>
struct cliente
{
    int idade;
    int opiniao;
};
typedef struct cliente Cliente;
int main()
{
    Cliente v[20];
    int otimo = 0, bom = 0, regular = 0, ruim = 0, pessimo = 0, somaidade = 0, velhoo = 0, velhor = 0, velhop = 0, somaruim = 0;
    double midade, pbom, mruim, pregular, ppessimo;
    for (int i = 0; i < 20; i++)
    {
        printf("Idade: ");
        scanf("%d", &v[i].idade);
        somaidade += v[i].idade;
        do
        {
            printf("1-otimo\n2-bom\n3-regular\n4-ruim\n5-pessimo\nopniao:");
            scanf("%d", &v[i].opiniao);

        } while (v[i].opiniao < 1 || v[i].opiniao > 5);
        if (v[i].opiniao == 1)
        {
            otimo++;
            if (v[i].idade > velhoo)
            {
                velhoo = v[i].idade;
            }
        }
        if (v[i].opiniao == 2)
        {
            bom++;
        }
        if (v[i].opiniao == 3)
        {
            regular++;
        }
        if (v[i].opiniao == 4)
        {
            ruim++;
            somaruim += v[i].idade;
            if (v[i].idade > velhor)
            {
                velhor = v[i].idade;
            }
        }
        if (v[i].opiniao == 5)
        {
            pessimo++;
            if (v[i].idade > velhop)
            {
                velhop = v[i].idade;
            }
        }
    }
    pbom = (bom / (double)20) * 100;
    pregular = (regular / (double)20) * 100;
    mruim = (somaruim / (double)ruim);
    ppessimo = (pessimo / (double)20) * 100;
    printf("a quantidade de respostas otimo = %d\n", otimo);
    printf("a diferenca percentual entre respostas bom e regular = %.2f\n", (pbom - pregular));
    printf("a media de idade das pessoas que responderam ruim = %.0f\n", mruim);
    printf("a porcentagem de respostas pessimo =%.2f e a maior idade que utilizou esta opcao = %d\n", ppessimo, velhop);
    printf("a diferenca de idade entre a maior idade que respondeu otimo e a maior idade que respondeu ruim = %d", (velhoo - velhor));
    return 0;
}
