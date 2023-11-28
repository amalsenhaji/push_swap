/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   poop_elem_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:07:29 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:59 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
