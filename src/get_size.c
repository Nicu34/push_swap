/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_size.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:18 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 11:31:21 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		get_size(int argc, char **argv, t_flg *flags)
{
	int		index;

	index = 1;
	while (index < argc && (!ft_strcmp(argv[index], "-v") ||
				!ft_strcmp(argv[index], "-c")))
	{
		if (argv[index][1] == 'v')
			flags->v = 1;
		else
			flags->c = 1;
		++index;
	}
	return (argc - index);
}
