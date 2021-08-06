/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rel_22.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:37:42 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:37:43 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tracking (int x, int y, char skyscrapper, char **box);

void	ft_rel_22 (char *clues, char **box)
{
    ft_updown(clues, box);
    ft_leftright(clues, box);
}

void	ft_updown (char *clues, char **box)
{
	char    clue_rel;
    char    skyscraper;
	int	x;

	clue_rel = '2';
    skyscraper = '4';
	x = 0;
	while (x < 4)
	{
		if (clues[x] == clue_rel && clues[x + 4] == clue_rel)
        {
            if (ft_tracking(x, 1, skyscraper, box) == 0)
                box[x][1] = skyscraper;
            else
                box[x][2] = skyscraper;
        }
		x++;
	}
}

void    ft_leftright (char *clues, char **box)
{
    char    clue_rel;
    char    skyscraper;
	int	y;
    int i;

	clue_rel = '2';
    skyscraper = '4';
	y = 0;
    i = 8;
	while (i < 12)
	{
		if (clues[i] == clue_rel && clues[i + 4] == clue_rel)
        {
            if (ft_tracking(1, y, skyscraper, box) == 0)
                box[y][1] = skyscraper;
            else
                box[y][2] = skyscraper;
        }
		i++;
        y++;
	}
}
