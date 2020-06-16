//HEADER!!!!!!!!!!!!!!



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

int	main(void)
{
	char string[16] = "This is string\n";
	
	ft_purstr(string);
	return (0);
}