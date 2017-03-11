/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   r.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:32:24 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:32:25 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	r_a(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		last;
	int		index;

	last = l_a[0];
	index = 0;
	while (index < size.a - 1)
	{
		l_a[index] = l_a[index + 1];
		index++;
	}
	l_a[index] = last;
	if (flags.c)
		ft_putstr(RED);
	ft_putstr("ra ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	r_b(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		last;
	int		index;

	last = l_b[0];
	index = 0;
	while (index < size.b - 1)
	{
		l_b[index] = l_b[index + 1];
		index++;
	}
	l_b[index] = last;
	if (flags.c)
		ft_putstr(BLUE);
	ft_putstr("rb ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}

void	r_both(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		last;
	int		index;

	last = l_a[0];
	index = 0;
	while (index < size.a - 1)
	{
		l_a[index] = l_a[index + 1];
		index++;
	}
	l_a[index] = last;
	last = l_b[0];
	index = 0;
	while (index < size.b - 1)
	{
		l_b[index] = l_b[index + 1];
		index++;
	}
	l_b[index] = last;
	if (flags.c)
		ft_putstr(CYAN);
	ft_putstr("rr ");
	if (flags.v)
		print_flag_v(l_a, l_b, size, flags);
}
