/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:32:23 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 10:10:18 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;
	int	is_printable;

	i = 0;
	is_printable = 1;
	while (str[i] != '\0' && is_printable != 0)
	{
		if (str[i] < 32 || str[i] == 127)
			is_printable = 0;
		i++;
	}
	return (is_printable);
}

int main()
{
	char str [] = "\n\n";
	ft_str_is_printable(str);
	printf("%d", ft_str_is_printable(str));	
}