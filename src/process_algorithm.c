/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   process_algorithm.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:50 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:59:23 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void		swaps(int *l_a, int *l_b, t_size size, t_flg flags)
{
	if (l_a[0] > l_a[1] && l_b[0] < l_b[1] && size.a > 1 && size.b > 1)
		swap_both(l_a, l_b, size, flags);
	else if (l_a[0] > l_a[1] && size.a > 1)
		swap_a(l_a, l_b, size, flags);
	else if (l_b[0] < l_b[1] && size.b > 1)
		swap_b(l_a, l_b, size, flags);
}

static void		rr_r(int *l_a, int *l_b, t_size size, t_flg flags)
{
	if (l_a[size.a - 1] < l_a[0] && l_a[size.a - 1] < l_a[1] &&
			size.b > 1 && l_b[size.b - 1] > l_b[0] &&
			l_b[size.b - 1] > l_b[1])
		rr_both(l_a, l_b, size, flags);
	else if (l_a[size.a - 1] < l_a[0] && l_a[size.a - 1] < l_a[1])
		rr_a(l_a, l_b, size, flags);
	else if (size.b > 1 && l_b[size.b - 1] > l_b[0]
			&& l_b[size.b - 1] > l_b[1])
		rr_b(l_a, l_b, size, flags);
	else if (size.a > 2 && l_a[0] > l_a[1] && l_a[0] > l_a[size.a - 1]
			&& l_a[0] > l_a[2] && size.b > 2 && l_b[0] < l_b[1] &&
			l_b[0] < l_b[size.b - 1] && l_b[0] < l_b[2])
		r_both(l_a, l_b, size, flags);
	else if (size.a > 2 && l_a[0] > l_a[1] && l_a[0] > l_a[size.a - 1]
			&& l_a[0] > l_a[2])
		r_a(l_a, l_b, size, flags);
	else if (size.b > 2 && l_b[0] < l_b[1] && l_b[0] < l_b[size.b - 1]
			&& l_b[0] < l_b[2])
		r_b(l_a, l_b, size, flags);
}

static void		rr_first(int *l_a, int *l_b, t_size size, t_flg flags)
{
	if (size.a > 1 && l_a[size.a - 1] > l_a[0] &&
			l_a[size.a - 1] < l_a[size.a - 2] && size.b > 1 &&
			l_b[size.b - 1] < l_b[0] && l_b[size.b - 1] > l_b[size.b - 2])
		rr_both(l_a, l_b, size, flags);
	else if (size.a > 1 && l_a[size.a - 1] > l_a[0] &&
			l_a[size.a - 1] < l_a[size.a - 2])
		rr_a(l_a, l_b, size, flags);
	else if (size.b > 1 && l_b[size.b - 1] < l_b[0] &&
			l_b[size.b - 1] > l_b[size.b - 2])
		rr_b(l_a, l_b, size, flags);
}

void			process_algorithm(int *l_a, int *l_b, t_size size, t_flg flags)
{
	int		is_sorted;

	is_sorted = 0;
	while (!is_sorted)
	{
		swaps(l_a, l_b, size, flags);
		rr_first(l_a, l_b, size, flags);
		rr_r(l_a, l_b, size, flags);
		swaps(l_a, l_b, size, flags);
		if (is_sorted_list(l_a, size.a) && size.b > 0)
		{
			push_a(l_a, l_b, &size, flags);
			if (l_a[0] > l_a[size.a - 1] && l_a[0] > l_a[size.a - 2]
					&& size.a > 2)
				r_a(l_a, l_b, size, flags);
		}
		else if (is_sorted_list(l_a, size.a))
			is_sorted = 1;
		else
			push_b(l_a, l_b, &size, flags);
	}
}
