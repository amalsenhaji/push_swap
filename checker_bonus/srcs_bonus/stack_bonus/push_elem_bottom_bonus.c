/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bottom_bonus.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:08:08 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:01 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
