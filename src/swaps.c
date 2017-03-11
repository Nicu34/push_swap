/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swaps.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:32:29 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:32:30 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		aux;

	aux = l_a[0];
	l_a[0] = l_a[1];
	l_a[1] = aux;
	if (flags.c)
		ft_putstr(RED);
	ft_putstr("sa ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	swap_b(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		aux;

	aux = l_b[0];
	l_b[0] = l_b[1];
	l_b[1] = aux;
	if (flags.c)
		ft_putstr(BLUE);
	ft_putstr("sb ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	swap_both(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		aux;

	aux = l_a[0];
	l_a[0] = l_a[1];
	l_a[1] = aux;
	aux = l_b[0];
	l_b[0] = l_b[1];
	l_b[1] = aux;
	if (flags.c)
		ft_putstr(CYAN);
	ft_putstr("ss ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}
