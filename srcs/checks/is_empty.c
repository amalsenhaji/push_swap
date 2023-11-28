/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 10:02:50 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:16 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* a funciton to check if stack empty or not */
int	is_empty(t_stack *stack)
{
	return (stack->top == NULL && stack->bottom == NULL);
}
