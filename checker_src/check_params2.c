/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_params2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 10:52:12 by lramela           #+#    #+#             */
/*   Updated: 2019/12/19 10:52:21 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

int		check_doubles(int argc, char **argv, int i)
{
	int j;

	j = 2;
	if (argc > 2)
	{
		while (i < argc)
		{
			while (argv[j])
			{
				if (ft_strcmp(argv[i], argv[j]) == 0)
					return (0);
				j++;
			}
			i++;
			j = i + 1;
		}
	}
	return (1);
}

int		check_numbers(int argc, char **argv, int i)
{
	int j;

	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			j++;
		while (argv[i][j])
		{
			if (!ft_isdigit(argv[i][j]))
				return (0);
			j++;
		}
		j = 0;
		i++;
	}
	return (1);
}
