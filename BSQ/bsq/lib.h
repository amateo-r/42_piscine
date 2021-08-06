/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amateo-r <amateo-r@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 17:59:43 by amateo-r          #+#    #+#             */
/*   Updated: 2021/04/28 17:59:46 by amateo-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIB_H
# define LIB_H
typedef struct s_node
{
	char	c;
	int		n;
}	t_node;

int		check_ef (char *file_name);
int		check_cf (char	*file_name);
int		check_empty (void);
int		ft_atoi (char *str);
int		ft_columns (char *file_name);
int		ft_len (char *file_name);
int		ft_strlen(char	*str);
int		ft_str_is_numeric(char *str);
int		handler_exceptions (char *file_name);
int		handler_matrix (char *file_name);
int		check_fl (char *fln, char *flc);
int		check_lines (char *file_name, int fln);
int		check_matrix (char *file_name, char *flc);
int		check_columns (char *file_name);
int		rl_ae (int a, int b, int c);
int		rl_ad (int a, int b, int c);
int		rl_nz (int a, int b, int c);
int		ft_min (int a, int b, int c);
int		ft_diff (int a, int b, int c);
char	*ft_fln (char *file_name, int rest);
char	*ft_flc (char *file_name, int ignored);
char	*ft_fln (char *file_name, int rest);
char	*ft_file_read(void);
void	ft_printerror (void);
void	ft_initboard (int rows, int cols, t_node **board);
void	ft_buildboard (char	*file_name, t_node **board);
void	ft_flrc (int rows, int cols, t_node **board, char *flc);
void	ft_findsquare (int rows, int cols, t_node **board, char *flc);
void	ft_printboard (t_node	**board, int rows, int columns);
void	ft_initnmax (int *n_max);
void	ft_changenmax (int size, int j, int i, int *n_max);
void	ft_abc (int abc[3], t_node **b, int i, int j);
void	handler_rules (int i, int j, t_node **b, int abc[3]);
#endif
