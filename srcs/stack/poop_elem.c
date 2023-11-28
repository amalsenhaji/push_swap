/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poop_elem.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:38:48 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:31 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	poop_elem(t_stack *stack)
{
	t_node	*tmp;

	if (!is_empty(stack))
	{
		tmp = stack->bottom;
		stack->bottom = stack->bottom->above;
		if (stack->size == 1)
		{
			stack->top = NULL;
			stack->bottom = NULL;
		}
		else
			stack->bottom->bellow = NULL;
		stack->size--;
		free(tmp);
	}
}
