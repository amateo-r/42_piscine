/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 14:29:49 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/25 14:29:52 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int		ft_filesize(void);
int		ft_keyfinder (char *to_find, char *data, int size);
char	*ft_cpydata (char *data);

int	main (int argc, char **argv)
{
	char	*data;
	int		size;

	size = ft_filesize();
	if (argc == 2)
	{
		data = malloc (size);
		ft_cpydata (data);
		if (ft_keyfinder(argv[1], data, size) == 0)
			write (1, "Comenzamos con la búsqueda por tríadas\n", 39);
		free(data);
	}
	else if (argc == 3)
		write (1, "Dos argumentos \n", 16);
	else
		write (1, "!!!!Numero de argumentos incorrecto!!!!\n", 40);
}
