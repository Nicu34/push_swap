/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:38 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:31:41 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(int *l_a, int *l_b, t_size *size, t_flg flags)
{
	int		index;
	int		first;

	first = l_b[0];
	index = 0;
	while (index < size->b - 1)
	{
		l_b[index] = l_b[index + 1];
		++index;
	}
	size->b -= 1;
	index = size->a;
	while (index > 0)
	{
		l_a[index] = l_a[index - 1];
		index--;
	}
	l_a[0] = first;
	size->a += 1;
	if (flags.c)
		ft_putstr(RED);
	ft_putstr("pa ");
	if (flags.v)
		print_flag_v(l_a, l_b, *size, flags);
}

void	push_b(int *l_a, int *l_b, t_size *size, t_flg flags)
{
	int		index;
	int		first;

	first = l_a[0];
	index = 0;
	while (index < size->a - 1)
	{
		l_a[index] = l_a[index + 1];
		++index;
	}
	size->a -= 1;
	index = size->b;
	while (index > 0)
	{
		l_b[index] = l_b[index - 1];
		index--;
	}
	l_b[0] = first;
	size->b += 1;
	if (flags.c)
		ft_putstr(BLUE);
	ft_putstr("pb ");
	if (flags.v)
		print_flag_v(l_a, l_b, *size, flags);
}
