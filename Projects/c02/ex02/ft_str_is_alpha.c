/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 09:37:51 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/15 10:17:30 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha (char *str)
{
	int	i;
	int	is_alphabetic;

	i = 0;
	is_alphabetic = 1;
	while (str[i] != '\0' && is_alphabetic != 0)
	{
		if (str[i] < 'A' || (str[i] > 'Z' && str[i] < 'a') || str[i] > 'z')
			is_alphabetic = 0;
		i++;
	}
	return (is_alphabetic);
}
