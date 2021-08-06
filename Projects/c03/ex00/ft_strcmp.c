/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 10:54:18 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 11:41:15 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_strcmp (char *s1, char *s2)
{
	int	i;
	int	not_equal;

	i = 0;
	not_equal = 0;
	while (s1[i] != '\0' && s1[i] == s2[i])
		i++;

	if (s1[i] == '\0' && s2[i] == '\0')
		not_equal = 0;
	else
		not_equal = s1[i] - s2[i];
		
	return (not_equal);
}

/*
int	main (void)
{
	char	a[4] = "Hola";
	char	b[4] = "Adio";

	printf ("%d\n", ft_strcmp (a, b));
}
*/
