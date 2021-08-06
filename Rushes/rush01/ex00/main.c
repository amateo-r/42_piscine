/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/17 19:41:43 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/17 19:41:47 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
#include <stdio.h>

void	ft_clean( char *clues, char *argv);
void	ft_clue_1 (char *clues, char **box);
void	ft_clue_4 (char *clues, char **box);
// void	ft_rel_12 (char *clues, char **box);
void	ft_rel_23 (char *clues, char **box);
void	ft_rel_22 (char *clues, char **box);
void	ft_find_3 (char *clues, char **box);
void	ft_print (char **box);

/*
void	ft_putchar (char c)
{
	write (1, &c, 1);
}
*/

void	ft_print (char **box)
{
	int	x;
	int	y;
	int size;

	size = 4;
	x = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			printf (" %c", box[y][x]);
			// ft_putchar ('\n');
			// ft_putchar (box[y][x]);
			x++;
		}
		y++;
	}
}

int main(int argc, char **argv)
{
	char box[4][4];
	char clues[16];

	//Limpiar input
	ft_clean(clues, argv[1]);
	printf("%s", clues);

	// Rellena con 4 clue1 contiguo
	ft_clue_1(argv[1], box);

	// Rellena con 1234 clue4 contiguo
	// ft_clue_4(argv[1], box);

	// Pone 3 pegado a clue2
	//ft_rel_12(argv[1], box);

	// Pone 4 en clue2 +1
	//void ft_rel_23(argv[1], box);

	// Comprueba 4s en casillas centrales
	//void ft_rel_22(argv[1], box);

	// Encuentra los 3s
	//void ft_find_3(argv[1], box);

	// Realiza el algoritmo del 3, coloca 1 y 2
	//void ft_alg_3(argv[1], box);

	// Rellena espacios en blanco, con 1 libre
	//void ft_check_1(argv[1], box);

	// Rellena espacios en blanco, con 2 libre
	//void ft_check_2(argv[1], box);

	// Imprime el resulado
	ft_print(box);
	return(0);
}

void	ft_print (char **box)
{
	int	x;
	int	y;
	int size;

	size = 4;
	x = 0;
	while (y < size)
	{
		x = 0;
		while (x < size)
		{
			printf (" %c", box[y][x]);
			// ft_putchar ('\n');
			// ft_putchar (box[y][x]);
			x++;
		}
		y++;
	}
}
