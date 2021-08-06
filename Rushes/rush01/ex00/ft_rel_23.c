/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rel_23.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:37:28 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:37:32 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_updown (char *clues, char **box)
{
	char    clue_rel1;
    char    clue_rel2;
    char    skyscraper;
	int	x;

	clue_rel1 = '2';
    clue_rel2 = '3';
    skyscraper = '4';
	x = 0;
	while (x < 4)
	{
		if (clues[x] == clue_rel1 && clues[x + 4] == clue_rel2)
			box[1][x] = skyscraper;
		else if (clues[x] == clue_rel2 && clues[x + 4] == clue_rel1)
			box[2][x] = skyscraper;
		x++;
	}
}

void    ft_leftright (char *clues, char **box)
{
    char    clue_rel1;
    char    clue_rel2;
    char    skyscraper;
	int	y;
    int i;

	clue_rel1 = '2';
    clue_rel2 = '3';
    skyscraper = '4';
	y = 0;
    i = 8;
	while (i < 12)
	{
		if (clues[i] == clue_rel1 && clues[i + 4] == clue_rel2)
			box[y][1] = skyscraper;
		else if (clues[i] == clue_rel2 && clues[i + 4] == clue_rel1)
			box[y][2] = skyscraper;
		i++;
        y++;
	}
}

void	ft_rel_23 (char *clues, char **box)
{
    ft_updown(clues, box);
    ft_leftright(clues, box);
}
