/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exceptions_00.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:53:31 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/26 09:53:35 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include "lib.h"

int	check_flcsize (char *str)
{
	if (ft_strlen (str) != 3)
		return (1);
	else
		return (0);
}

int	check_uniquechar (char *flc)
{
	if (flc[0] == flc[1] || flc[0] == flc[2])
		return (1);
	else if (flc[1] == flc[2])
		return (1);
	return (0);
}

int	check_fl (char *fln, char *flc)
{
	int		flag;

	if (ft_strlen(fln) + ft_strlen(flc) < 4)
		flag = 1;
	if (ft_atoi(fln) == 0)
		flag = 1;
	if (ft_str_is_numeric(fln) == 0)
		flag = 1;
	if (check_uniquechar (flc) == 1)
		flag = 1;
	return (flag);
}

int	check_matrix (char *file_name, char *flc)
{
	int		flag;
	int		filedesc;
	int		i;
	char	c;

	flag = 0;
	i = -1;
	filedesc = open (file_name, O_RDONLY);
	while (++i < ft_len(file_name))
		read (filedesc, &c, 1);
	while (read (filedesc, &c, 1) != 0 && flag == 0)
		if ((c != flc[0] && c != flc[1]) && c != '\n')
			flag = 1;
	close (filedesc);
	return (flag);
}

int	check_empty (void)
{
	int		flag;
	int		filedesc;
	char	c;

	flag = 0;
	filedesc = open ("tempgrep", O_RDONLY);
	if (filedesc == -1)
		flag = 1;
	else if (read (filedesc, &c, 1) != 0)
		flag = 1;
	return (flag);
}
