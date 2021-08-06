/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tools.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rufernan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/24 12:12:35 by rufernan          #+#    #+#             */
/*   Updated: 2021/04/24 17:37:53 by rufernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_atoi(char *str)
{
	unsigned int	i;
	unsigned int	value;

	i = 0;
	value = 0;
	while (str[i] <= 32 || str[i] == 127)
	{
		if (str[i + 1] == '+')
			i++;
		i++;
	}
	while ((str[i] == '-') || (str[i] == '+' && str[i + 1] == '+'))
	{
		return (0);
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		value = (value * 10) + (str[i] - 48);
		i++;
	}
	return (value);
}

void	ft_putchar (char c)
{
	write (1, &c, 1);
}

int	ft_strcmp (char *s1, char *s2)
{
	int	i;
	int	not_equal;

	i = 0;
	not_equal = 0;
	while (s1[i] != '\0' && not_equal == 0 && s1[i] == s2[i])
		i++;
	if (s1[i] == '\0' && s2[i] == '\0')
		not_equal = 0;
	else
		not_equal = s1[i] - s2[i];
	return (not_equal);
}

int	ft_strlen(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_strlen2 (int cursor, char stop, char *data)
{
	int	len;

	len = 0;
	while (data[cursor] != stop)
	{
		cursor ++;
		len++;
	}
	return (len);
}
