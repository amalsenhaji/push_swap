# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    testing.sh                                         :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:08:31 by amsenhaj          #+#    #+#              #
#    Updated: 2023/11/27 17:44:42 by amsenhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

echo "Numbers : $(python testing/random_ints.py $@ > test && cat test) - \n\n\n $(./push_swap $(cat test) \
	| wc -l) Lines, and Checker is : $(./push_swap $(cat test) | ./testing/checker_Mac $(cat test))"; rm test

