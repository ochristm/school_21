//header

#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

void	ft_purstr(char *str)
{
	while(*str != '\0')
   {
   	ft_putchar(*str);
   	str++;
   }
}

int	ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i])
	{
		i++;
		if (s1[i] == '\0')
			return (0);
	}
	return (s1[i] - s2[i]);
}

void	print_all(char **arg, int i)
{
	ft_putstr(arg[i]);
	ft_putchar('\n');
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	while (i < ac - 1)
	{
		if (ft_strcmp(av[i], av[i + 1]) > 0)
		{
			tmp = av[i];
			av[i] = av[i + 1];
			av[i + 1] = tmp;
			i = 1;
		}
		else
			i++;
	}
	i = 1;
	while (i < ac)
	{
		print_all(av, i);
		i++;
	}
	return (0);
}

