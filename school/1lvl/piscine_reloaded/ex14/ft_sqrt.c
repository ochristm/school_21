//header

int	ft_sqrt(int nb)
{
	int root;
	int answ;

	root = 1;
	answ = 0;
	while (root <= nb /2)
	{
		answ = root * root;
		if (answ == nb)
			return (root);
		root++;
	}
	return (0);
}
