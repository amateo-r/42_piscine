/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:39:15 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:39:18 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_tracking (int x, int y, char skyscrapper, char **box)
{
    int coincidence;

    coincidence = 0;
    if (box[y][x] == skyscrapper)
        coincidence = 1;
    if (y != 0 && coincidence == 0)
        coincidence = ft_check_up(x, y, skyscrapper, box);
    if (x != 3 && coincidence == 0)
        coincidence = ft_check_right(x, y, skyscrapper, box);
    if (y != 3 && coincidence == 0)
        coincidence = ft_check_down(x, y, skyscrapper, box);
    if (x != 0 && coincidence == 0)
        coincidence = ft_check_left(x, y, skyscrapper, box);
    return (coincidence);
}

int ft_check_up (int x, int y, char skyscrapper, char **box)
{
    int coincidence;

    coincidence = 0;
    while (y > -1 && coincidence == 0)
    {
        if (box[y][x] == skyscrapper)
            coincidence = 1;
        y--;
    }
    return (coincidence);
}

int ft_check_right (int x, int y, char skyscrapper, char **box)
{
    int coincidence;

    coincidence = 0;
    while (x < 4 && coincidence == 0)
    {
        if (box[y][x] == skyscrapper)
            coincidence = 1;
        x++;
    }
    return (coincidence);
}

int ft_check_down (int x, int y, char skyscrapper, char **box)
{
    int coincidence;

    coincidence = 0;
    while (y < 4 && coincidence == 0)
    {
        if (box[y][x] == skyscrapper)
            coincidence = 1;
            y++;
    }
    return (coincidence);
}

int ft_check_left (int x, int y, char skyscrapper, char **box)
{
    int coincidence;

    coincidence = 0;
    while (x > -1 && coincidence == 0)
    {
        if (box[y][x] == skyscrapper)
            coincidence = 1;
        x--;
    }
    return (coincidence);
}
