/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:57 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 12:10:08 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		main(int argc, char **argv)
{
	int		*l_a;
	int		*l_b;
	t_size	size;
	t_flg	flags;

	l_a = NULL;
	l_b = NULL;
	if (is_error(argc, argv))
		ft_putstr("Error\n");
	else
	{
		init_flags(&flags);
		init_size(&size);
		size.a = get_size(argc, argv, &flags);
		l_a = allocate_list(l_a, size.a);
		l_b = allocate_list(l_b, size.a);
		l_a = create_list(l_a, size.a, argv);
		process_algorithm(l_a, l_b, size, flags);
	}
	return (0);
}
