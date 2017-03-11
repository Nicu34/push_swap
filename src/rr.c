/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:32:27 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:33:53 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr_a(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		first;
	int		index;

	first = l_a[size.a - 1];
	index = size.a - 1;
	while (index > 0)
	{
		l_a[index] = l_a[index - 1];
		index--;
	}
	l_a[0] = first;
	if (flags.c)
		ft_putstr(RED);
	ft_putstr("rra ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	rr_b(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		first;
	int		index;

	first = l_b[size.b - 1];
	index = size.b - 1;
	while (index > 0)
	{
		l_b[index] = l_b[index - 1];
		index--;
	}
	l_b[0] = first;
	if (flags.c)
		ft_putstr(BLUE);
	ft_putstr("rrb ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	rr_both(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		first;
	int		index;

	first = l_b[size.b - 1];
	index = size.b - 1;
	while (index > 0)
	{
		l_b[index] = l_b[index - 1];
		index--;
	}
	l_b[0] = first;
	first = l_a[size.a - 1];
	index = size.a - 1;
	while (index > 0)
	{
		l_a[index] = l_a[index - 1];
		index--;
	}
	l_a[0] = first;
	if (flags.c)
		ft_putstr(CYAN);
	ft_putstr("rrr ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}
