/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_stack_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:07:09 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:43:58 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

/* free_stack: a function to free everything before exiting */
void	free_stack(t_stack *stack)
{
	while (!is_empty(stack))
		pop_elem(stack);
	free(stack);
}
