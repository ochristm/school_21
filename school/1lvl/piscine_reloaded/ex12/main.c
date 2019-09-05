#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int	ft_iterative_factorial(int nb);

int	main(int ac, char **av)
{
	if (ac == 2)
	{
		printf("nb = %d.\n", atoi(av[1]));
		printf("fact = %d.\n", ft_iterative_factorial(atoi(av[1])));
	}
	return (0);
}
