/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 15:00:21 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/20 14:45:45 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitlize (char *str)
{
	int	i;
	int	flag;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;
	i = 1;
	flag = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || str[i] == '-')
			flag = 1;
		else if (str[i] >= 'a' && str[i] <= 'z' && flag == 1)
		{
			str[i] -= 32;
			flag = 0;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}
