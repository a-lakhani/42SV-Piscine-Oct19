# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    libft_creator.sh                                   :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alakhani <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/30 21:54:26 by alakhani          #+#    #+#              #
#    Updated: 2019/10/30 21:58:46 by alakhani         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

gcc -Wall -Wextra -Werror -c ft_putchar.c
gcc -Wall -Wextra -Werror -c ft_swap.c
gcc -Wall -Wextra -Werror -c ft_putstr.c
gcc -Wall -Wextra -Werror -c ft_strlen.c
gcc -Wall -Wextra -Werror -c ft_strcmp.c
ar rcs libft.a ft_putchar.o ft_swap.o ft_putstr.o ft_strlen.o ft_strcmp.o
