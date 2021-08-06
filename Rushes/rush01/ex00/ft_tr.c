/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_travel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:15:03 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:29:26 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tr_colup (char clue, char skyscraper, char *clues, char **box)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 0;
	while (i < 4)
	{
		if (clues[i] == clue)
			box[y][x] = skyscraper;
		i++;
		x++;
	}
}

void	ft_tr_coldown (char clue, char skyscraper, char *clues, char **box)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 3;
	i = 4;
	while (i < 8)
	{
		if (clues[i] == clue)
			box[y][x] = skyscraper;
		i++;
		x++;
	}
}

void	ft_tr_rowleft (char clue, char skyscraper, char *clues, char **box)
{
	int	x;
	int	y;
	int	i;

	x = 0;
	y = 0;
	i = 8;
	while (i < 12)
	{
		if (clues[i] == clue)
			box[y][x] = skyscraper;
		i++;
		y++;
	}
}

void	ft_tr_rowright (char clue, char skyscraper, char *clues, char **box)
{
	int	x;
	int	y;
	int	i;

	x = 3;
	y = 0;
	i = 12;
	while (i < 16)
	{
		if (clues[i] == clue)
			box[y][x] = skyscraper;
		i++;
		y++;
	}
}
