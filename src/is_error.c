/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_error.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmuresan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/19 11:31:29 by nmuresan          #+#    #+#             */
/*   Updated: 2016/03/19 12:26:19 by nmuresan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int		number_of_digits(int number)
{
	int		digits;

	digits = 1;
	number = ft_abs(number / 10);
	while (number)
	{
		number = ft_abs(number / 10);
		++digits;
	}
	return (digits);
}

int		check_str_digits(char *str, int number)
{
	int		index;
	int		digit_number;

	digit_number = 0;
	index = 0;
	while ((str[index] >= 9 && str[index] <= 13) || str[index] == 32)
		index++;
	if (str[index] == '-' || str[index] == '+')
		index++;
	while (ft_isdigit(str[index]))
	{
		index++;
		digit_number++;
	}
	if (digit_number != number_of_digits(number))
		return (0);
	return (1);
}

int		check_doubles(int argc, char **argv)
{
	int		i;
	int		j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
			if (!ft_strcmp(argv[i], argv[j]))
				return (1);
			else
				j++;
		i++;
	}
	return (0);
}

int		is_error(int argc, char **argv)
{
	int		index;

	index = 1;
	while (index < argc &&
			(!ft_strcmp(argv[index], "-v") || !ft_strcmp(argv[index], "-c")))
		++index;
	if (index == argc || index > 3 || check_doubles(argc, argv))
		return (1);
	if (index > 2 && !ft_strcmp(argv[1], argv[2]))
		return (1);
	while (index < argc)
		if (!check_str_digits(argv[index], ft_atoi(argv[index])))
			return (1);
		else
			++index;
	return (0);
}
