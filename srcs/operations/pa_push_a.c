/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa_push_a.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 07:51:07 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:20 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* pa: push a - take the first element at the top of b and put it at top of a.
 * (do nothing if b is empty). */

void	pa_push_a(t_stack *a, t_stack *b)
{
	if (is_empty(b))
		return ;
	push_elem(a, new_elem(b->top->data));
	pop_elem(b);
	ft_putstr("pa\n");
}
