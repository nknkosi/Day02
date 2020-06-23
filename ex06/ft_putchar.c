#include <unistd.h>

int ft_putchar(char c);

void ft_putnbr(int nb)
{
	char p;

	p=1;
	while (p <= 100)
	{
		ft_putchar(p);
		p++;
	}
}
