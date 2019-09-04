// HEADER
// DELETE FTPUTCHAR

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_is_negative(int n)
{
	n < 0 ? ft_putchar('N') : ft_putchar('P');
}

int	main(void)
{
	int a;
	int b;

	a = 65;
	b = -123;

	ft_is_negative(a);
	ft_is_negative(b);
	return (0);
}
