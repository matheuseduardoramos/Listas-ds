#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int htrab, vhora, hextra40, hextra60, htrab40, htrab60;
	float salsemanal;
	
	printf("Digite as horas trabalhadas: ");
	scanf ("%d", &htrab);
	printf("Digite o valor da hora trabalhada: ");
	scanf ("%d", &vhora);

	htrab40 = htrab - 40;
	htrab60 = htrab40 - 20;

	if (htrab <= 40)
	{
		salsemanal = htrab*vhora;
		
	}

	hextra40 = vhora+(vhora/2);

	if (htrab > 40 && htrab <=60)
	{
		salsemanal = vhora*40+(htrab40*hextra40); 
	}
	if (htrab > 60)
	{
		hextra60 = vhora*2;
		salsemanal = vhora*40+(20*hextra40)+(htrab60*hextra60);

	}	
	
	printf("Seu salario eh R$ %.2f", salsemanal);

	return 0;

