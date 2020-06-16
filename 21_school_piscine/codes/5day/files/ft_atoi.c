//HEADER!!!!!!!!!!!!!!

(основная логика, это не все!!)


#include <unistd.h>

void	ft_putchar(char str)
{
	write(1, &str, 1);
}

int	ft_atoi(char *str)
{
  int temp = 0; // число
  int i = 0;
  int sign = 0; // знак числа 0- положительное, 1 — отрицательное
  if (str[i] == '-')
  {
    sign = 1;
    i++;
  }
  while (str[i] >= 0x30 && str[i] <= 0x39)
  {
    temp = temp + (str[i] & 0x0F);
    temp = temp * 10;
    i++;
  }
  temp = temp / 10;
  if (sign == 1)
    temp = -temp;
  return(temp);
}

int	main(void)
{
	char string[4] = "-253";
	int nbr;
	
	nbr = ft_atoi(string);
	if ((nbr < 2147483648) || (nbr > -2147483649))
	{
		printf("%d", nbr);
	}
	return (0);
}