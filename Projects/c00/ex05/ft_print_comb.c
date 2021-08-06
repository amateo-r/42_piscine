/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/11 17:30:46 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/14 14:00:51 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	char	c;
	char	d;
	char	u;

	c = '0' - 1;
	while (c++ < '7')
	{
		d = c;
		while (d++ < '8')
		{
			u = d;
			while (u++ < '9')
			{
				if (!(c == '0' && d == '1' && u == '2'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				ft_putchar(c);
				ft_putchar(d);
				ft_putchar(u);
			}
		}
	}
}
