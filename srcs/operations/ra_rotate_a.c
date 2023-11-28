/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 07:54:53 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:21 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* ra: rotate a - shift up all elements of stack a by 1.
 * the first element becomes the last one. */
void	ra_rotate_a(t_stack *a, int flag)
{
	push_elem_bottom(a, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("ra\n");
}
