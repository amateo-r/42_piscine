#include <unistd.h>
#include <stdio.h>

void	ft_putstr (char	*str)
{
	int	i;

	i = -1;
	while (str[++i] != '\0')
		write (1, &str[i], 1);
}

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc > 1)
		while (++i < argc)
			ft_putstr(argv[i]), ft_putchar ('\n');
	return (0);
}
