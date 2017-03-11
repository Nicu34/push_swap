/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_list.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:33 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:31:34 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		is_sorted_list(int *list, int size)
{
	int		index;

	index = 0;
	while (index < size - 1)
		if (list[index] > list[index + 1])
			return (0);
		else
			++index;
	return (1);
}
