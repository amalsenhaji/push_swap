/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 09:42:38 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:08 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int ac, char **av)
{
	t_stack	*a;
	t_stack	*b;

	if (ac == 1)
		exit (EXIT_FAILURE);
	a = stack_init();
	b = stack_init();
	get_input(a, b, av + 1, ac - 1);
	if (a->size == 3)
		sort_three(a);
	else if (a->size == 5)
		naive_sort(a, b);
	else
		chunks_sort(a, b);
	free_stack(a);
	free_stack(b);
	exit (EXIT_SUCCESS);
}
