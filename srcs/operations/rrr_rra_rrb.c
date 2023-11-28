/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 08:01:42 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:26 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/* rrr: reverse rotate a and reverse rotate b at the same time */
void	rrr_rra_rrb(t_stack *a, t_stack *b)
{
	rra_reverse_rotate_a(a, true);
	rrb_reverse_rotate_b(b, true);
	ft_putstr("rrr\n");
}
