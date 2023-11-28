/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra_reverse_rotate_a_bonus.c                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:24 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:53 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rra: reverse rotate a - shift down all elements of stack a b 1.
 * the last element becomes the first one. */
void	rra_reverse_rotate_a(t_stack *a, int flag)
{
	push_elem(a, new_elem(a->bottom->data));
	poop_elem(a);
	if (!flag)
		ft_putstr("rra\n");
}
