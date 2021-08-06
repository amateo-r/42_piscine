/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 10:10:06 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 09:57:48 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	is_lowercase;

	i = 0;
	is_lowercase = 1;
	while (str[i] != '\0' && is_lowercase != 0)
	{
		if (str[i] < 'a' || str[i] > 'z')
			is_lowercase = 0;
		i++;
	}
	return (is_lowercase);
}
