// header

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	a;
	int	b;

	a = 5;
	b = 66;
	printf("before: a = %d, b = %d.\n", a, b);
	ft_swap(&a, &b);
	printf("after: a = %d, b = %d.\n", a, b);

	return (0);
}
