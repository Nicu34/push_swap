/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:32:16 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:32:17 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __PUSH_SWAP_H
# define __PUSH_SWAP_H

# include "libft/libft.h"
# define RED "\x1b[31m"
# define GREEN "\x1b[32m"
# define YELLOW "\x1b[33m"
# define BLUE "\x1b[34m"
# define MAGENTA "\x1b[35m"
# define CYAN "\x1b[36m"

typedef struct		s_flg
{
	int				v;
	int				c;
}					t_flg;

typedef struct		s_size
{
	int				a;
	int				b;
}					t_size;

void				init_flags(t_flg *flags);
void				init_size(t_size *size);
int					*allocate_list(int *list, int size);
int					*create_list(int *list, int size, char **numbers);
int					get_size(int argc, char **argv, t_flg *flags);
int					number_of_digits(int number);
int					check_str_digits(char *str, int number);
int					is_error(int argc, char **argv);
void				print_list(int *list, int size);
void				process_algorithm(int *l_a, int *l_b, t_size size,
					t_flg flags);
int					is_sorted_list(int *list, int size);
void				swap_a(int *l_a, int *l_b, t_size size, t_flg flags);
void				swap_b(int *l_a, int *l_b, t_size size, t_flg flags);
void				swap_both(int *l_a, int *l_b, t_size size, t_flg flags);
void				rr_a(int *l_a, int *t_b, t_size size, t_flg flags);
void				rr_b(int *l_a, int *t_b, t_size size, t_flg flags);
void				rr_both(int *l_a, int *l_b, t_size size, t_flg flags);
void				push_a(int *l_a, int *l_b, t_size *size, t_flg flags);
void				push_b(int *l_a, int *l_b, t_size *size, t_flg flags);
void				print_flag_v(int *l_a, int *l_b, t_size size, t_flg flags);
void				r_a(int *l_a, int *l_b, t_size size, t_flg flags);
void				r_b(int *l_a, int *l_b, t_size size, t_flg flags);
void				r_both(int *l_a, int *l_b, t_size size, t_flg flags);
#endif
