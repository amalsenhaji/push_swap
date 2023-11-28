/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:03:50 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:18 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* is_sorted: a function to check if stack is sorted or not */
int	is_sorted(t_stack stack)
{
	if (is_empty(&stack))
		return (1);
	while (stack.top->bellow)
	{
		if (stack.top->data > stack.top->bellow->data)
			return (0);
		stack.top = stack.top->bellow;
	}
	return (1);
}
