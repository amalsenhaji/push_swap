/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa_swap_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 07:48:39 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:27 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sa: swap a - swap the first 2 elements at the top of stack a. 
 * (do nothing if there is only one or no elements). */
void	sa_swap_a(t_stack *a, int flag)
{
	int	tmp;

	if (is_empty(a))
		return ;
	tmp = a->top->data;
	a->top->data = a->top->bellow->data;
	a->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sa\n");
}
