/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf_04.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 13:26:01 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/28 13:26:07 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <fcntl.h>
#include <unistd.h>

void	ft_changenmax (int size, int j, int i, int *n_max)
{
	n_max[0] = size;
	n_max[1] = j;
	n_max[2] = i;
}

void	ft_initnmax (int *n_max)
{
	int	i;

	i = -1;
	while (++i < 3)
		n_max[i] = 0;
}

void	ft_abc (int abc[3], t_node **b, int i, int j)
{
	b[j][i].n = 1;
	abc[0] = b[j][i - 1].n;
	abc[1] = b[j - 1][i].n;
	abc[2] = b[j - 1][i - 1].n;
}

char	*ft_file_read(void)
{
	char	buf;
	int		file;

	file = open("tempgrep", O_WRONLY | O_CREAT | O_TRUNC, 0666);
	if (file < 0)
		return (NULL);
	while (read(STDIN_FILENO, &buf, 1) != 0)
	{
		write(file, &buf, 1);
	}
	close(file);
	return ("tempgrep");
}
