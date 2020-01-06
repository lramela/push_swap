/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 08:38:46 by lramela           #+#    #+#             */
/*   Updated: 2020/01/06 08:39:07 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	arg_two(char **str, int a_c)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	int		big[3];

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_c = program_loop(a, a_c, i, big);
	else if (i == 3)
		small_sort(a, a_c, i);
	else if (i == 2)
		sort_two(a, a_c, i);
}

void	arg_many(int argc, char **argv)
{
	int i;
	int j;
	int a[500];
	int big[3];
	int a_c;

	i = 0;
	j = 1;
	a_c = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	big[0] = biggest(a, i);
	big[1] = second_biggest(a, i);
	big[2] = third_biggest(a, i);
	if (i > 3)
		a_c = program_loop(a, a_c, i, big);
	else if (i == 3)
		small_sort(a, a_c, i);
	else if (i == 2)
		sort_two(a, a_c, i);
}
