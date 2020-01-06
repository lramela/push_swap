/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/04 13:56:42 by lramela           #+#    #+#             */
/*   Updated: 2019/06/18 08:40:20 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*source;
	char	*dest;

	source = (char*)src;
	dest = (char*)dst;
	if (dest == source)
		return (source);
	if ((dest <= source) || (dest >= (source + len)))
	{
		while (len-- > 0)
		{
			*(dest++) = *(source++);
		}
	}
	else
	{
		source = (char*)src + len - 1;
		dest = (char*)dst + len - 1;
		while (len-- > 0)
		{
			*(dest--) = *(source--);
		}
	}
	return (dst);
}
