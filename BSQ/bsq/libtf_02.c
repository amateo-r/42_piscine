/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf_02.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@studente.42madrid>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 10:00:42 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/27 10:00:46 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "lib.h"

void	ft_initboard (int rows, int cols, t_node **board)
{
	int		i;

	i = -1;
	while (++i < rows)
		board[i] = (t_node *) malloc(cols * sizeof (t_node));
}

void	ft_printboard (t_node	**board, int rows, int columns)
{
	int	x;
	int	y;

	x = 0;
	while (x < rows)
	{
		y = 0;
		while (y < columns)
		{
			write (1, &board[x][y].c, 1);
			y++;
		}
		write (1, "\n", 1);
		x++;
	}
}

void	ft_buildboard (char	*file_name, t_node **board)
{
	int		x;
	int		y;
	int		filedesc;
	char	c;

	y = 0;
	filedesc = open (file_name, O_RDONLY);
	while (++y <= ft_len(file_name))
		read (filedesc, &c, 1);
	x = 0;
	y = 0;
	while (read (filedesc, &c, 1) != 0)
	{
		if (c != '\n')
		{
			board[y][x].c = c;
			x++;
		}
		else
		{
			y++;
			x = 0;
		}
	}
	close (filedesc);
}
