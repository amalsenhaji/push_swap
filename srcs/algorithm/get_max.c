/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_max.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:45:46 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:11 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_max(t_stack *stack)
{
	t_node	*tmp;
	int		max;

	tmp = stack->top;
	max = tmp->data;
	while (tmp->bellow)
	{
		tmp = tmp->bellow;
		if (max < tmp->data)
			max = tmp->data;
	}
	return (max);
}
