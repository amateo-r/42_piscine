/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf_03.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 17:38:40 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/27 17:38:44 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"

int	ft_diff (int a, int b, int c)
{
	int	diff;

	if (a == b)
	{
		diff = c;
		if (diff < a)
			diff += 1;
	}
	else if (b == c)
	{
		diff = a;
		if (diff < b)
			diff += 1;
	}
	else
	{
		diff = b;
		if (diff < a)
			diff += 1;
	}
	return (diff);
}

int	ft_min (int a, int b, int c)
{
	int	min;

	if (a < b)
	{
		min = a;
		if (a > c)
			min = c;
	}
	else if (b < c)
		min = b;
	else
		min = c;
	return (min);
}

void	ft_flrc (int rows, int cols, t_node **b, char *flc)
{
	int	i;
	int	j;

	i = -1;
	j = 0;
	while (++i < cols)
	{
		if (b[j][i].c == flc[1])
			b[j][i].n = 0;
		else
			b[j][i].n = 1;
	}
	i = 0;
	j = 0;
	while (++j < rows)
	{
		if (b[j][i].c == flc[1])
			b[j][i].n = 0;
		else
			b[j][i].n = 1;
	}
}

void	ft_putsquare (int *n_max, t_node **board, char *flc)
{
	int	i;
	int	j;
	int	size_i;
	int	size_j;

	j = n_max[1];
	size_j = n_max[0];
	while (size_j > 0)
	{
		i = n_max[2];
		size_i = n_max[0];
		while (size_i > 0)
		{
			board [j][i].c = flc[2];
			i--;
			size_i--;
		}
		j--;
		size_j--;
	}
}

void	ft_findsquare (int rows, int cols, t_node **b, char *flc)
{
	int	i;
	int	j;
	int	abc[3];
	int	n_max[3];

	j = 0;
	ft_initnmax (n_max);
	while (++j < rows)
	{
		i = 0;
		while (++i < cols)
		{
			if (b[j][i].c == flc[0])
			{
				ft_abc (abc, b, i, j);
				if (rl_nz (abc[0], abc[1], abc[2]))
				{
					handler_rules (i, j, b, abc);
					if (n_max[0] < b[j][i].n)
						ft_changenmax(b[j][i].n, j, i, n_max);
				}
			}
		}
	}
	ft_putsquare (n_max, b, flc);
}
