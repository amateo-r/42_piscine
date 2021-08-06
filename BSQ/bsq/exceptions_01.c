/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions_01.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:56:18 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/26 15:56:20 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include "lib.h"

int	check_lines (char *file_name, int fln)
{
	int		filedesc;
	int		i;
	int		rd;
	char	c;

	i = -1;
	filedesc = open (file_name, O_RDONLY);
	while (++i < ft_len(file_name))
		read (filedesc, &c, 1);
	i = 0;
	rd = read (filedesc, &c, 1);
	while (rd != 0)
	{
		if (c == '\n')
			i++;
		rd = read (filedesc, &c, 1);
	}
	if (rd == 0)
		i++;
	close (filedesc);
	if (i - 1 != fln)
		return (1);
	return (0);
}

int	check_ls (char c, int i, int j)
{
	if (c != '\n')
		return (0);
	else
	{
		if (j != i)
			return (1);
		return (2);
	}
}

int	check_columns (char *file_name)
{
	int		filedesc;
	int		i;
	int		j;
	char	c;

	i = -1;
	filedesc = open (file_name, O_RDONLY);
	while (++i < ft_len(file_name))
		read (filedesc, &c, 1);
	i = 0;
	while (read (filedesc, &c, 1) != 0 && c != '\n')
		i++;
	j = 0;
	while (read (filedesc, &c, 1) != 0)
		if (check_ls (c, i, j) == 0)
			j++;
	else if (check_ls (c, i, j) == 2)
		j = 0;
	else
		return (1);
	if (j != i && j != 0)
		return (1);
	close (filedesc);
	return (0);
}

int	check_cf (char	*file_name)
{
	int		flag;
	char	*fln;
	char	*flc;

	flag = 0;
	if (ft_len(file_name) - 1 < 4)
		flag = 1;
	else
	{
		fln = ft_fln(file_name, 3);
		flc = ft_flc(file_name, ft_strlen(fln));
		if (check_fl(fln, flc) == 1)
			flag = 1;
		if (check_matrix (file_name, flc) == 1)
			flag = 1;
		if (check_columns (file_name) == 1)
			flag = 1;
		if (check_lines (file_name, ft_atoi(fln)) == 1)
			flag = 1;
	}
	return (flag);
}

int	check_ef (char *file_name)
{
	int	filedesc;

	filedesc = open (file_name, O_RDONLY);
	if (filedesc < 0)
		return (1);
	return (0);
}
