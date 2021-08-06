/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 10:01:13 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/21 10:10:27 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <string.h>

int	ft_strlen (char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	k;
	unsigned int	r;

	i = 0;
	j = ft_strlen(src);
	k = ft_strlen(dest);
	while (src[i] && (k + i + 1) < size)
	{
		if (k + i + 1 < size)
			dest[k + i] = src[i];
		i++;
	}
	dest[k + i] = 0;
	if (size < k)
		r = j + size;
	else
		r = j + k;
	return (r);
}
/*
int	main (void)
{
	char a[] = "@@-18,7";
	char b[] = " +18,7 @@";

	printf ("Longitud ft original: %lu\n", strlcat(a, b, 8));
	printf ("%s\n\n", a);

	printf ("Longitud ft user: %d\n", ft_strlcat(a, b, 8));
	printf ("%s", a);
}
*/
