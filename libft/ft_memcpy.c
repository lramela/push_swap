/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/03 12:49:11 by lramela           #+#    #+#             */
/*   Updated: 2019/06/20 10:24:55 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;
	unsigned	char	*tmp;
	unsigned	char	*tmp2;

	i = 0;
	tmp = (unsigned char *)src;
	tmp2 = (unsigned char *)dst;
	if (!(dst || src))
		return (NULL);
	while (n)
	{
		tmp2[i] = tmp[i];
		i++;
		n--;
	}
	return (dst);
}
