#include <stdio.h>

int main()
{
    int valor1, valor2, valor3;
    float media;

    printf("digite 3 valores: \n");
    scanf("%d %d %d", &valor1, &valor2, &valor3);

    media = (valor1 + valor2 + valor3) / 3;

    printf("A media dos valores = %.2f",media);

    return 0;
}

