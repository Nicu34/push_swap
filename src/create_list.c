/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_list.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:11 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:31:14 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		*create_list(int *list, int size, char **numbers)
{
	int		i;
	int		j;

	i = 0;
	j = 1;
	while (!ft_strcmp(numbers[j], "-v") || !ft_strcmp(numbers[j], "-c"))
		++j;
	while (i < size)
		list[i++] = ft_atoi(numbers[j++]);
	return (list);
}
