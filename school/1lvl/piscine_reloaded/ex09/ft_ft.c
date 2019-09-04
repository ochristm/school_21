// HEADER
//

#include <stdio.h>
void	ft_ft(int *nbr)
{
	*nbr = 42;
	//return (*nbr);
}

int	main(void)
{
	int one;
	int *ptr;

	one = 1;
	ptr = &one;
	printf("one before = %d.\n", one);
	printf("one after = %d.\n", ft_ft(ptr));
	
	return (0);
}
