/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_two.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/06 10:06:01 by lramela           #+#    #+#             */
/*   Updated: 2020/01/06 10:06:15 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(int *a, int a_c, int i)
{
	int j;

	j = i - 1;
	if (j > 0)
	{
		while (j > a_c)
		{
			ft_swap(&a[j], &a[j - 1]);
			j--;
		}
	}
}

void	rrb(int *a, int a_c)
{
	int j;

	j = a_c - 1;
	while (j > 0)
	{
		ft_swap(&a[j], &a[j - 1]);
		j--;
	}
}

void	rrr(int *a, int a_c, int i)
{
	rra(a, a_c, i);
	rrb(a, a_c);
}
