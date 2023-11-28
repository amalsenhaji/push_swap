/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sb_swap_b_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:53 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:56 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

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
