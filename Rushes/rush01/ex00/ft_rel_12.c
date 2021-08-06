/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rel_12.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:37:11 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:37:14 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_updown (char *clues, char **box)
{
	int	x;
    int count;

	x = 0;
    count = 0;
	while (x < 4)
	{
		if (clues[x] == '1' && clues[x + 4] == '2')
        {
            box[3][x] = '3';
            count++;
        }
		else if (clues[x] == '2' && clues[x + 4] == '1')
        {
            box[0][x] = '3';
            count++;
        }
		x++;
	}
    return (count);
}

int ft_leftright (char *clues, char **box)
{
	int	y;
    int i;
    int count;

	y = 0;
    i = 8;
    count = 0;
	while (i < 12)
	{
		if (clues[i] == '1' && clues[i + 4] == '2')
        {
            box[y][3] = '3';
            count++;
        }
		else if (clues[i] == '2' && clues[i + 4] == '1')
        {
            box[y][0] = '3';
            count++;
        }
		i++;
        y++;
	}
    return (count);
}

int ft_rel_12(char *clues, char **box)
{
    int count;

    count = 0;
    count += ft_updown(clues, box);
    count += ft_leftright(clues, box);
    return (count);
}