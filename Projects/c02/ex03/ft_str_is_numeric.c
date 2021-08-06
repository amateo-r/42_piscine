/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:56:50 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/15 10:16:50 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
