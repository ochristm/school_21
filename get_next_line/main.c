#include <stdio.h>
#include "libft.h"
#include "get_next_line.h"
#include <fcntl.h>
#include <stdio.h>
int main() 
{
	int a;
	char *line;
	int b;
	int aa;

    a = open("test", O_RDONLY);
    aa = open("Makefile", O_RDONLY);
    while((b = get_next_line(a, &line)) > 0)
	{
		ft_putendl(line);
//		ft_putchar('\n');
//		ft_putnbr(b);
		if (get_next_line(aa, &line) > 0)
			ft_putendl(line);
//		ft_putchar('\n');
		free(line);
	}
	ft_putstr(line);
//    if (line)
  //  	free(line);
//	ft_putchar('\n');
	ft_putnbr(b);
    return 0;
}