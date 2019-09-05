//header

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	//*mod = a - (*div * b);
	*mod = a % b;
}

int	main(void)
{
	int a;
	int b;
	int div;
	int mod;

	a = -15;
	b = 4;
	div = 77;
	mod = 88;
	printf("a = %d, b = %d.\n", a, b);
	printf("before mod = %d, div = %d.\n", mod, div);
	ft_div_mod(a, b, &div, &mod);
	printf("after mod = %d, div = %d.\n", mod, div);
	
	return (0);
}
