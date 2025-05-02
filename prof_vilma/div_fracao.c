#include <stdio.h>

void div_fracao(inta, intb, intc, intd);
int	mdc(int a, int b);

int	main()
{
	div_fracao(3, 4, 1, 2);
	div_fracao(5, 6, 2, 3);
	div_fracao(7, 8, 7, 16);
	div_fracao(2, 5, 3, 10);
	div_fracao(9, 10, 3, 5);
	div_fracao(5, 12, 1, 4);
	div_fracao(3, 7, 9, 14);
	div_fracao(2, 3, 5, 9);
	div_fracao(11, 15, 22, 45);
	div_fracao(4, 9, 2, 27);
	return (0);
}

int	mdc(int a, int b)
{
	while (b != 0)
	{
		int temp = b;
		b = a % b;
		a = temp;
	}
	return (a);

}

void	div_fracao(int a, int b, int c, int d)
{
	int numerador;
	int denominador;
	int divisor;

	// Primeiro passo: Fazer a multiplicação inversa do numerador e denominador
	numerador = a * d;
	denominador = b * c;

	// Segundo passo: achar o maior divisor comum entre o numerador e o denominador
	divisor = mdc(numerador, denominador);

	// Terceiro passo: fazer a divisão para achar a fração simplificada
	numerador = numerador / divisor;
	denominador = denominador / divisor;
	
	printf("%d\n", numerador);
	printf("%d\n",denominador);
	printf("\n");

}