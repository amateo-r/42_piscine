#include <unistd.h>

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

int	ft_strcmp (char *s1, char *s2)
{
	int	i;
	int	not_equal;

	i = 0;
	not_equal = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		not_equal = 0;
	else
		not_equal = s1[i] - s2[i];
	return (not_equal);
}

int	main (int argc, char **argv)
{
	int		i;
	char	*temp;

	i = 1;
	if (argc > 1)
	{
		while (i < argc - 1)
		{
			if (ft_strcmp (argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
			}
			i++;
		}
		i = 1;
		while (i < argc)
		{
			ft_putstr(argv[i]), ft_putchar('\n');
			i++;
		}
	}
	return (0);
}
