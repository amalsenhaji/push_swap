/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_min.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:46:04 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:11 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_min(t_stack *stack)
{
	t_node	*tmp;
	int		min;

	tmp = stack->top;
	min = tmp->data;
	while (tmp->bellow)
	{
		tmp = tmp->bellow;
		if (min > tmp->data)
			min = tmp->data;
	}
	return (min);
}
