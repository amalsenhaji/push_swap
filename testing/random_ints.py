# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    random_ints.py                                     :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: amsenhaj <amsenhaj@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/01/14 13:09:17 by amsenhaj          #+#    #+#              #
#    Updated: 2023/11/27 17:44:42 by amsenhaj         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

import random
import sys

ints = []

len = int(sys.argv[1])

i = 0

while i < len:
	n = random.randint(0, 1000)
	if n not in ints:
		ints.append(n)
		i += 1

string_ints = [str(int) for int in ints]
str_of_ints = " ".join(string_ints)
print(str_of_ints)
