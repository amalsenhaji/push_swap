/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_input.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 15:55:27 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:15 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	get_input(t_stack *a, t_stack *b, char **av, int size)
{
	if (!is_integer(av, size) || is_greater_than_int(av, size)
		|| is_duplicates(av, size))
		put_error("Error\n");
	while (size)
		push_elem(a, new_elem(ft_atoi(av[--size])));
	if (is_sorted(*a))
	{
		free_stack(a);
		free(b);
		exit(EXIT_SUCCESS);
	}
}
