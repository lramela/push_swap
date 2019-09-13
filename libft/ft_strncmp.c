/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/28 12:16:57 by lramela           #+#    #+#             */
/*   Updated: 2019/06/22 00:01:53 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	while (n > 0)
	{
		if (!(s1[i] || s2[i]))
			break ;
		if (s1[i] != s2[i])
		{
			if (((unsigned char)s1[i] - (unsigned char)s2[i]) < 0)
				return (-1);
			else if (((unsigned char)s1[i] - (unsigned char)s2[i]) > 0)
				return (1);
		}
		else
			i++;
		n--;
	}
	return (0);
}
