# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramela <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/12/19 09:40:18 by lramela           #+#    #+#              #
#    Updated: 2020/01/20 10:01:15 by lramela          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CFLAGS = gcc -Wall -Wextra -Werror -o
NAME = push_swap
NAME2 = checker

SRC = 	push_swap_src/big_three.c\
		push_swap_src/ft_swap.c\
		push_swap_src/move_up.c\
		push_swap_src/nbr_moves.c\
		push_swap_src/process_functions.c\
		push_swap_src/process_functions2.c\
		push_swap_src/process_functions3.c\
		push_swap_src/push_back.c\
		push_swap_src/push_swap.c\
		push_swap_src/rotate.c\
		push_swap_src/rotate_two.c\
		push_swap_src/small_sort.c\
		push_swap_src/sort.c\
		push_swap_src/swap_functions.c\
		push_swap_src/arg_number.c\
		push_swap_src/check_overflow.c\
		push_swap_src/check_params.c\
		push_swap_src/check_params2.c\

SRC2 =	checker_src/checker.c\
		checker_src/ft_swap.c\
		checker_src/swap.c\
		checker_src/rotate.c\
		checker_src/rev_rotate.c\
		checker_src/arg_number.c\
		checker_src/check_overflow.c\
		checker_src/check_params.c\
		checker_src/check_params2.c\

all: $(NAME) $(NAME2)
$(NAME):
	@$(MAKE) -C libft/ re
	$(CFLAGS) $(NAME) $(SRC) -L libft/ -lft

$(NAME2):
	$(CFLAGS) $(NAME2) $(SRC2) -L libft/ -lft

clean:
	@$(MAKE) -C libft/ clean

fclean: fclean
	rm -f $(NAME)
	rm -f $(NAME2)
	@$(MAKE) -C libft/ fclean

re: fclean all
