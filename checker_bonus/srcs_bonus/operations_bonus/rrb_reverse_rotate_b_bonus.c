/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb_reverse_rotate_b_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:31 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:54 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rrb: reverse rotate b - shift down all elements of stack b by 1.
 * the last one becomes the first one. */
void	rrb_reverse_rotate_b(t_stack *b, int flag)
{
	push_elem(b, new_elem(b->bottom->data));
	poop_elem(b);
	if (!flag)
		ft_putstr("rrb\n");
}
