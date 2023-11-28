/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_integer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:04:29 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:18 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* is_integer: a function that checks if the argument is an integer or not. */
static int	is_digit(char c)
{
	return (c >= '0' && c <= '9');
}

static int	is_int(char *arg)
{
	int	i;

	i = -1;
	if (arg[0] == '-' || arg[0] == '+')
		i++;
	while (arg[++i])
		if (!is_digit(arg[i]))
			return (0);
	return (1);
}

int	is_integer(char **av, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		if (!is_int(av[i]) || av[i][0] == '\0')
			return (0);
	return (1);
}
