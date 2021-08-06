#include <unistd.h>

void	ft_putstr(char *str);

int g_n = 1;

void	ft_next_string(char *comb, int pos)
{
	int	i;

	if (pos < g_n)
	{
		comb[pos] = '0' + pos;
		pos++;
		ft_next_string(comb, pos);
	}

	ft_putstr(comb);
}

void	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while(str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	ft_print_combn(int n)
{
	char	comb[n];
	int	i;
	
	i = 0;
	g_n = n;
	ft_next_string(comb, i);
}
