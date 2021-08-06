/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 14:35:47 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 14:39:07 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	if (to_find[i] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		j = 0;
		if (str[i] == to_find[j])
		{
			k = i;
			while (str[k] == to_find[j])
			{
				if (to_find[j + 1] == '\0')
					return (str + i);
				j++;
				k++;
			}
		}
		i++;
	}
	return (0);
}

/*
int	main (void)
{
	char	haystack[] = "holiwiUWU";
	char	needle[] = "wi";

	printf ("%s\n", ft_strstr(haystack, needle));
	printf ("%s", haystack);
}
*/
