#include "../inc/data.h" 

void	putchar(char c)
{
	std::cout << c;
}

char	capital(char c)
{
	return ((char)toupper(c));
}

void	megaphone(char *str)
{
	char	c;
	int		i;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if (islower(c))
			putchar(capital(c));
		else
			putchar(c);
		i++;
	}
}

int	main(int ac, char **av)
{
	int	i = 1;

	if (ac == 1)
	{
		std::cout << "You at least one argument.\n";
		return (1);
	}
	while (i < ac)
	{
		megaphone(av[i++]);
		if (i < ac)
			putchar(' ');
	}
	std::cout << std::endl;
	return (0);
}
