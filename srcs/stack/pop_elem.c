/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_elem.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 16:35:18 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:32 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	pop_elem(t_stack *stack)
{
	t_node	*tmp;

	if (!is_empty(stack))
	{
		tmp = stack->top;
		stack->top = stack->top->bellow;
		if (stack->size == 1)
		{
			stack->top = NULL;
			stack->bottom = NULL;
		}
		else
			stack->top->above = NULL;
		stack->size--;
		free(tmp);
	}
}
