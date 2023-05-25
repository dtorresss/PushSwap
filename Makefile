# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dtorres- <dtorres-@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/04/01 16:33:04 by dtorres-          #+#    #+#              #
#    Updated: 2023/05/25 16:39:23 by dtorres-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap
PROG = operations1.c utilities.c pushswap_main.c extra_functions.c
OBJS = ${PROG:.c=.o}
CFLAGS = -Wall -Wextra -Werror
##$(NAME): $(OBJS)
##	make -C libft/
##	gcc $(CFLAGS) -c $(PROG) | ar -rcs $(NAME) $(OBJS) libft/*.o
$(NAME): $(OBJS)
	make -C libft/
	gcc $(CFLAGS) $(OBJS) ./libft/libft.a -o $(NAME)

all: $(NAME)

clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)
	make fclean -C libft/

re: fclean all
