/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/19 10:57:04 by lramela           #+#    #+#             */
/*   Updated: 2019/12/19 10:57:22 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rb(int *a, int a_c)
{
	int j;

	j = 0;
	if (a_c > 1)
	{
		while (j < a_c - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	ra(int *a, int a_c, int i)
{
	int j;

	j = a_c;
	if (!(a_c >= i))
	{
		while (j < i - 1)
		{
			ft_swap(&a[j], &a[j + 1]);
			j++;
		}
	}
}

void	rr(int *a, int a_c, int i)
{
	ra(a, a_c, i);
	rb(a, a_c);
}
