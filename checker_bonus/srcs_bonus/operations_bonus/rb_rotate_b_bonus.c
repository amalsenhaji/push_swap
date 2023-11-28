/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb_rotate_b_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:12 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:52 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rb: rotate b - shift all elements of stack b by 1.
 * the first element becomes the last one. */
void	rb_rotate_b(t_stack *b, int flag)
{
	push_elem_bottom(b, new_elem(b->top->data));
	pop_elem(b);
	if (!flag)
		ft_putstr("rb\n");
}
