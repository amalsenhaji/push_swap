/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_elem_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:07:57 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:00 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

void	push_elem(t_stack *stack, t_node *elem)
{
	if (!is_empty(stack))
	{
		elem->bellow = stack->top;
		stack->top->above = elem;
	}
	else
		stack->bottom = elem;
	stack->top = elem;
	stack->size++;
}
