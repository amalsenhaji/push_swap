/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bottom.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/13 11:47:53 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:33 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_elem_bottom(t_stack *stack, t_node *elem)
{
	if (!is_empty(stack))
	{
		elem->above = stack->bottom;
		stack->bottom->bellow = elem;
	}
	else
		stack->top = elem;
	stack->bottom = elem;
	stack->size++;
}
