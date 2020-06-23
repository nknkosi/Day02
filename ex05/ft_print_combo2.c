#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_print_combo2(void)
{
	char a;
	char b;

	a ='0';
	while (a <= '8')
	{
		b = a + 1;
		while (b <= '9')
		{
			ft_putchar(a);
			ft_putchar(b);
			if (a != '8')
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
	
}
