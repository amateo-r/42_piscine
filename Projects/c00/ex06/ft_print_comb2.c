/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/12 11:58:22 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 13:26:16 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

const int	g_max = 99;

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

char	to_ascii(char n, int first_char)
{
	char	d;

	if (first_char == 1)
		d = n / 10 + '0';
	else
		d = n % 10 + '0';
	return (d);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 <= g_max)
	{
		n2 = n1 + 1;
		while (n2 <= g_max)
		{
			ft_putchar(to_ascii(n1, 1));
			ft_putchar(to_ascii(n1, 0));
			ft_putchar(' ');
			ft_putchar(to_ascii(n2, 1));
			ft_putchar(to_ascii(n2, 0));
			if (n1 != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			n2++;
		}
		n1++;
	}
}

int main (void)
{
	ft_print_comb2();
}
