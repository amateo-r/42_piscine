/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libtf_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:40:38 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/26 09:40:42 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_printerror (void)
{
	write (1, "map error\n", 10);
}

int	ft_atoi (char *str)
{
	int	i;
	int	n;

	i = 0;
	n = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (str[i] - '0') + n * 10;
		i++;
	}
	return (n);
}

int	ft_len (char *file_name)
{
	int		size;
	int		filedesc;
	int		flag;
	char	c;

	filedesc = open (file_name, O_RDONLY);
	flag = 0;
	size = 0;
	while (read (filedesc, &c, 1) != 0 && flag == 0)
	{
		if (c != '\n')
			size++;
		else if (c == '\n')
		{
			flag = 1;
			size++;
		}
	}
	close (filedesc);
	return (size);
}

char	*ft_fln (char *file_name, int rest)
{
	int		i;
	int		size;
	int		filedesc;
	char	*fl;

	i = 0;
	size = ft_len (file_name) - rest - 1;
	fl = malloc (size);
	filedesc = open (file_name, O_RDONLY);
	while (read (filedesc, &fl[i], 1) != 0 && i < size)
		i++;
	fl[i] = '\0';
	close (filedesc);
	return (fl);
}
