/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_sorted_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:19:07 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:49 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
