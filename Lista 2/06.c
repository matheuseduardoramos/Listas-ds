#include <stdio.h>

int main()
{
	int x = 0, y = 0, z = 0, maior = 0, menor = 0, meio = 0;

	printf("digite 3 valores: ");
	scanf("%d %d %d", &x, &y, &z);

	if ((x > y) && (x > z))
	{
		maior = x;
	}
	if ((y > x) && (y > z))
	{
		maior = y;
	}
	if ((z > y) && (z > x))
	{
		maior = z;
	}
	if ((x < y) && (x < z))
	{
		menor = x;
	}
	if ((y < x) && (y < z))
	{
		menor = y;
	}
	if ((z < y) && (z < x))
	{
		menor = z;
	}
	if (((x < y) && (x > z)) || ((x < z) && (x > y)))
	{
		meio = x;
	}
	if (((y < x) && (y > z)) || ((y < z) && (y > x)))
	{
		meio = y;
	}
	if (((z < y) && (z > x)) || ((z < x) && (z > y)))
	{
		meio = z;
	}

	printf("maior %d\nmenor %d\nMeio %d", maior, menor, meio);

	return 0;
}
