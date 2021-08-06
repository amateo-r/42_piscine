/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:38:04 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:38:09 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// int ft_tracking (int x, int y, char skyscrapper, char **box);
int ft_rel_12(char *clues, char **box);
void    ft_check_empty (char *clues, char **box);

void    ft_find_3 (char *clues, char **box)
{
    int count;

    count = 0;
    count += ft_rel_12(clues, box);
    while (count != 4)
    {
        ft_check_empty (clues, box);
    }
}
