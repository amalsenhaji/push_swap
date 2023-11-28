/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_greater_than_int_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:17:21 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:48 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* a function to check if the argument is greater than an int */
static int	is_greater(char *arg)
{
	return (ft_atoi(arg) < INT_MIN || ft_atoi(arg) > INT_MAX);
}

int	is_greater_than_int(char **av, int size)
{
	int	i;

	i = 0;
	while (++i < size)
		if (is_greater(av[i]))
			return (1);
	return (0);
}
