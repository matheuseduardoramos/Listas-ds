#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, resultado;
	char operacao;
	printf("digite dois numeros: ");
	scanf("%f %f", &a, &b);
	printf("[+] Soma\n[-] Subtracao\n[/] Divisao\n[*] Multiplicacao\nDigite o Sinal da Operacao: ");
	scanf("%s", &operacao);

	if (operacao == '+')
	{
		resultado = (a + b);
	}
	if (operacao == '-')
	{
		resultado = (a - b);
	}
	if (operacao == '/')
	{
		resultado = (float)a / b;
	}
	if (operacao == '*')
	{
		resultado = (a * b);
	}

	printf("O resultado = %.2f", resultado);
	return 0;
}
