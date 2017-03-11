/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:46 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:31:47 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	print_flag_v(int *l_a, int *l_b, t_size size, t_flg flags)
{
	static int step = 1;

	if (flags.c)
		ft_putstr(GREEN);
	ft_putstr("\n---------------------------------------------------------\n");
	if (flags.c)
		ft_putstr(YELLOW);
	ft_putstr(">>> Operation number ");
	if (flags.c)
		ft_putstr(MAGENTA);
	ft_putnbr(step);
	ft_putstr("\n");
	if (flags.c)
		ft_putstr(RED);
	ft_putstr("l_a = ");
	print_list(l_a, size.a);
	if (flags.c)
		ft_putstr(BLUE);
	ft_putstr("l_b = ");
	print_list(l_b, size.b);
	if (flags.c)
		ft_putstr(GREEN);
	ft_putstr("---------------------------------------------------------\n\n");
	++step;
}

void	print_list(int *list, int size)
{
	int		index;

	index = 0;
	if (size == 0)
		ft_putstr("Empty list.");
	while (index < size)
	{
		ft_putnbr(list[index++]);
		ft_putchar(';');
	}
	ft_putchar('\n');
}
