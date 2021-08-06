/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rules_00.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 14:21:52 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/28 14:21:55 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	rl_nz (int a, int b, int c)
{
	int	flag;

	flag = 0;
	if (a != 0 && b != 0 && c != 0)
		flag = 1;
	return (flag);
}

int	rl_ae (int a, int b, int c)
{
	int	flag;

	flag = 0;
	if (a == b && a == c)
		flag = 1;
	return (flag);
}

int	rl_ad (int a, int b, int c)
{
	int	flag;

	flag = 0;
	if (a != b && a != c && b != c)
		flag = 1;
	return (flag);
}
