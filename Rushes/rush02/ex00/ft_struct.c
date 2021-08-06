/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_struct.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 08:42:31 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/25 14:29:42 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

void	ft_putchar (char c);
int		ft_strcmp (char *s1, char *s2);
int		ft_strlen2 (int cursor, char stop, char *data);
int		ft_strlen (char	*str);

int	ft_filesize(void)
{
	int		i;
	int		filedesc;
	char	data2;

	i = 0;
	filedesc = open ("numbers.dict", O_RDONLY);
	while (read (filedesc, &data2, 1) != 0)
		i++;
	close (filedesc);
	return (i);
}

char	*ft_cpydata (char *data)
{
	int		filedesc;
	int		i;

	filedesc = open ("numbers.dict", O_RDONLY);
	i = 0;
	while (read (filedesc, data + i, 1) != 0)
		i++;
	close (filedesc);
	return (data);
}

int	ft_printvalue(int cursor, char *key, char *to_find, char *data)
{
	int	flag;

	flag = 0;
	if (ft_strcmp (to_find, key) == 0)
	{
		while (data[cursor] != ':')
			cursor--;
		cursor += 2;
		while (data[cursor] != '\n' && cursor != ft_filesize())
		{
			ft_putchar(data[cursor]);
			cursor++;
		}
		flag = 1;
	}
	return (flag);
}

int	ft_keyfinder (char *to_find, char *data, int size)
{
	int		cursor;
	int		i;
	int		flag;
	int		key_size;
	char	*key;

	i = 0;
	cursor = 0;
	flag = 0;
	while (cursor < size && flag == 0)
	{
		key_size = ft_strlen2(cursor, ':', data);
		key = malloc (key_size);
		i = -1;
		while (++i < key_size)
			key[i] = data[cursor + i];
		key[i] = '\0';
		cursor += key_size;
		while (data[cursor] != '\n')
			cursor++;
		cursor++;
		flag = ft_printvalue (cursor, key, to_find, data);
		free(key);
	}
	return (flag);
}
