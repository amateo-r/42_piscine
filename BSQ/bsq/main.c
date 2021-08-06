/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:35:52 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/26 09:35:57 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lib.h"
#include <stdio.h>

int	main (int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc >= 2)
	{
		while (++i < argc)
		{
			if (handler_exceptions (argv[i]) == 0)
				handler_matrix(argv[i]);
		}
	}
	else
	{
		if (check_empty() == 0)
		{
			if (handler_exceptions ("tempgrep") == 0)
				handler_matrix("tempgrep");
		}
		else
			ft_file_read();
	}
	return (0);
}
