/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb_push_b_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:17:55 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:51 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* pb: push b - take the first element of top of a and put it at the top of b.
 * (do nothing if a emepty). */
void	pb_push_b(t_stack *a, t_stack *b)
{
	if (is_empty(a))
		return ;
	push_elem(b, new_elem(a->top->data));
	pop_elem(a);
	ft_putstr("pb\n");
}
