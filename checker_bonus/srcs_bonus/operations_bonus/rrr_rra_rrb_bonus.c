/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr_rra_rrb_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:36 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:55 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rrr: reverse rotate a and reverse rotate b at the same time */
void	rrr_rra_rrb(t_stack *a, t_stack *b)
{
	rra_reverse_rotate_a(a, true);
	rrb_reverse_rotate_b(b, true);
	ft_putstr("rrr\n");
}
