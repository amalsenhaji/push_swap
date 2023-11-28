/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_elem_index.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 23:45:24 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:10 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_elem_index(t_stack a, int elem)
{
	int	index;

	index = 0;
	if (!a.top)
		return (-1);
	while (a.top && a.top->data != elem)
	{
		a.top = a.top->bellow;
		index++;
	}
	return (index);
}
