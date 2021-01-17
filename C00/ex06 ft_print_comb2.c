#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb2(void)
{
	int		i; /*primeiros 2 digitos*/
	int		k; /*2 digitos seguintes*/

	i = 0;
	k = 0;
	while (i < 100)
	{
		k = i + 1; /*garante ordem crescente - evita numeros repetidos*/
		while (k < 100)
		{
			ft_putchar(i / 10 + '0'); /*extrai os primeiros digitos do numero*/
			ft_putchar(i % 10 + '0'); /*extrai o último digito do numero*/
			ft_putchar(' ');
			ft_putchar(k / 10 + '0');
			ft_putchar(k % 10 + '0');
			/*Enquanto i /= 98 (ulitmo i possivel), acrescenta ', ' ao final da combinação*/
			if ((i / 10 != 9) || (i % 10 != 8))
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			k++;
		}
		i++;
	}
}