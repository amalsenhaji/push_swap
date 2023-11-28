/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 07:49:16 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:28 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* sb: swap b - swap the first 2 elements at the top of stack b.
 * (do nothing if there is only one of no elements). */
void	sb_swap_b(t_stack *b, int flag)
{
	int	tmp;

	if (is_empty(b))
		return ;
	tmp = b->top->data;
	b->top->data = b->top->bellow->data;
	b->top->bellow->data = tmp;
	if (!flag)
		ft_putstr("sb\n");
}
