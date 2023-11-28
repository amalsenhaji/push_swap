/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss_sa_sb_bonus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 02:19:59 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:57 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* ss: swap a and swap b at the same time. */
void	ss_sa_sb(t_stack *a, t_stack *b)
{
	sa_swap_a(a, true);
	sb_swap_b(b, true);
	ft_putstr("ss\n");
}
