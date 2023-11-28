/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 01:28:28 by amsenhaj          #+#    #+#             */
/*   Updated: 2023/11/27 17:44:05 by amsenhaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*ft_strjoin(char *s1, char c)
{
	char	*output;
	int		i;
	int		j;

	if (!s1)
		s1 = ft_strdup("");
	output = (char *) malloc((ft_strlen(s1) + 2) * sizeof(char));
	if (!output)
		return (0);
	i = 0;
	j = 0;
	while (s1[j])
		output[i++] = s1[j++];
	output[i++] = c;
	output[i] = 0;
	return (output);
}
