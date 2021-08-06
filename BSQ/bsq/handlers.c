/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handlers.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@studente.42madrid>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/27 08:53:15 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/27 08:53:18 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "lib.h"

int	handler_exceptions (char *file_name)
{
	int		flag;

	flag = 0;
	if (check_ef (file_name) == 1)
		flag = 1;
	else if (check_cf (file_name) == 1)
		flag = 1;
	if (flag == 1)
		ft_printerror ();
	return (flag);
}

int	handler_matrix (char *file_name)
{
	int			rows;
	int			cols;
	char		*flc;
	t_node		**board;

	rows = ft_atoi (ft_fln(file_name, 3));
	cols = ft_columns (file_name);
	flc = ft_flc(file_name, ft_strlen(ft_fln(file_name, 3)));
	board = (t_node **) malloc (rows * sizeof (t_node *));
	ft_initboard (rows, cols, board);
	ft_buildboard (file_name, board);
	ft_flrc (rows, cols, board, flc);
	ft_findsquare (rows, cols, board, flc);
	ft_printboard (board, rows, cols);
	free (board);
	return (0);
}

void	handler_rules (int i, int j, t_node **b, int abc[3])
{
	if (rl_nz (abc[0], abc[1], abc[2]))
	{
		if (rl_ae (abc[0], abc[1], abc[2]))
			b[j][i].n += b[j][i - 1].n;
		else if (rl_ad(abc[0], abc[1], abc[2]))
			b[j][i].n += ft_min(abc[0], abc[1], abc[2]);
		else
			b[j][i].n = ft_diff(abc[0], abc[1], abc[2]);
	}
}
