/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra_rotate_a_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:02 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:51 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* ra: rotate a - shift up all elements of stack a by 1.
 * the first element becomes the last one. */
void	ra_rotate_a(t_stack *a, int flag)
{
	push_elem_bottom(a, new_elem(a->top->data));
	pop_elem(a);
	if (!flag)
		ft_putstr("ra\n");
}
