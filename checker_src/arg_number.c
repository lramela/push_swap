/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arg_number.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 09:46:49 by lramela           #+#    #+#             */
/*   Updated: 2019/12/19 09:47:07 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	arg_two(char **str, int a_c)
{
	char	**str2;
	int		i;
	int		j;
	int		a[500];
	char	*line;

	i = 0;
	j = 0;
	str2 = ft_strsplit(str[1], ' ');
	while (str2[j])
		a[i++] = ft_atoi(str2[j++]);
	while (get_next_line(0, &line))
	{
		a_c = check_line(line, a, a_c, i);
		if (a_c == -1)
			break ;
	}
	if (a_c != -1)
		results(a, a_c, i);
	else
		ft_putstr("Error\n");
}

void	arg_many(int argc, char **argv)
{
	int		i;
	int		j;
	int		a[500];
	char	*line;
	int		a_c;

	i = 0;
	j = 1;
	a_c = 0;
	while (j < argc)
		a[i++] = ft_atoi(argv[j++]);
	while (get_next_line(0, &line))
	{
		a_c = check_line(line, a, a_c, i);
		if (a_c == -1)
			break ;
	}
	if (a_c != -1)
		results(a, a_c, i);
	else
		ft_putstr("Error\n");
}
