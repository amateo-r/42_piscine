/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 11:51:43 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/21 11:43:06 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while ((s1[i] == s2[i] && s1[i] != '\0') && i < n)
		i++;
	if (i == n)
		i--;
	return (s1[i] - s2[i]);
}

int	main (void)
{
	char	s1[45] = "";
	char	s2[45] = "";

	printf ("%d\n", ft_strncmp(s1, s2, 5));
}

