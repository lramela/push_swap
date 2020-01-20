/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 10:53:48 by lramela           #+#    #+#             */
/*   Updated: 2020/01/20 10:18:34 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include "../libft/libft.h"

void	rb(int *a, int a_c);
void	ra(int *a, int a_c, int i);
void	rra(int *a, int a_c, int i);
void	rrb(int *a, int a_c);
void	rr(int *a, int a_c, int i);
void	rrr(int *a, int a_c, int i);
int		pb(int *a, int a_c, int i);
int		pa(int *a, int a_c);
void	ss(int *a, int a_c, int i);
void	sb(int *a, int a_c);
void	sa(int *a, int a_c, int i);
void	ft_swap(int *a, int *b);
int		check_sort(int *a, int a_c, int i);
void	results(int *a, int a_c, int i);
int		check_line(char *line, int *a, int a_c, int i);
void	print_arr(int *a, int i, int a_c);
void	arg_two(char **str, int a_c);
void	arg_many(int argc, char **argv);
int		check_alpha(int c, int c2);
int		check_max(char *str);
int		check_min(char *str);
int		check_overflow(int argc, char **argv, int i);
int		check_split_params(char **str, int i);
int		check_params(int argc, char **str, int i);
int		check_all2(int argc, char **argv);
int		check_all(int argc, char **argv);
int		check_doubles(int argc, char **argv, int i);
int		check_numbers(int argc, char **argv, int i);

#endif
