/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clue_1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 18:54:08 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:35:17 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_tr_colup (char clue, char skyscraper, char *clues, char **box);
void	ft_tr_coldown (char clue, char skyscraper, char *clues, char **box);
void	ft_tr_rowleft (char clue, char skyscraper, char *clues, char **box);
void	ft_tr_rowright (char clue, char skyscraper, char *clues, char **box);

void	ft_clue_1 (char *clues, char **box)
{
	char	clue;
	char	skyscraper;

	clue = '1';
	skyscraper = '4';
	ft_tr_colup (clue, skyscraper, clues, box);
	ft_tr_coldown (clue, skyscraper, clues, box);
	ft_tr_rowleft (clue, skyscraper, clues, box);
	ft_tr_rowright (clue, skyscraper, clues, box);
}

void	ft_clue_4 (char *clues, char **box)
{
	char	clue;
	char	skyscrapper;

	clue = '4';
	skyscrapper = '1';
	ft_tr_colup (clue, skyscrapper, clues, box);
	ft_tr_coldown (clue, skyscrapper, clues, box);
	ft_tr_rowleft (clue, skyscrapper, clues, box);
	ft_tr_rowright (clue, skyscrapper, clues, box);
}
