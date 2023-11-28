/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr_ra_rb_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:18:26 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:52 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* rr: rotate a and rotate b at the same time. */
void	rr_ra_rb(t_stack *a, t_stack *b)
{
	ra_rotate_a(a, true);
	rb_rotate_b(b, true);
	ft_putstr("rr\n");
}
