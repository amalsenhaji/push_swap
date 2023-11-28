/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_empty_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:18:35 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:47 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* a funciton to check if stack empty or not */
int	is_empty(t_stack *stack)
{
	return (stack->top == NULL && stack->bottom == NULL);
}
