/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf_01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 12:05:37 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/26 12:05:40 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

int	ft_len (char *file_name);

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	is_numeric;

	i = 0;
	is_numeric = 1;
	while (str[i] != '\0' && is_numeric != 0)
	{
		if (str[i] < '0' || str[i] > '9')
			is_numeric = 0;
		i++;
	}
	return (is_numeric);
}

int	ft_columns (char *file_name)
{
	int		i;
	int		filedesc;
	char	c;

	i = 0;
	filedesc = open (file_name, O_RDONLY);
	while (++i <= ft_len(file_name))
		read (filedesc, &c, 1);
	i = 0;
	while (read (filedesc, &c, 1) != 0 && c != '\n')
		i++;
	close (filedesc);
	return (i);
}

char	*ft_flc (char *file_name, int ignored)
{
	int		i;
	int		j;
	int		filedesc;
	char	*flc;
	char	c;

	i = 0;
	j = 0;
	flc = malloc (ft_len (file_name) - ignored);
	filedesc = open (file_name, O_RDONLY);
	while (read (filedesc, &c, 1) != 0 && j < ft_len (file_name)
		- (ignored + 1))
	{
		if (i >= ignored && c != '\n')
		{
			flc[j] = c;
			j++;
		}
		i++;
	}
	flc[j] = '\0';
	close (filedesc);
	return (flc);
}
