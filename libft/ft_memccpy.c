/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 14:10:04 by lramela           #+#    #+#             */
/*   Updated: 2019/06/20 09:14:45 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	char	*ptr_dst;

	ptr_dst = dst;
	while (n > 0)
	{
		if (*(unsigned char*)src != (unsigned char)c)
		{
			*ptr_dst = *(unsigned char *)src;
			ptr_dst++;
			src++;
		}
		else
		{
			*ptr_dst = *(unsigned char *)src;
			ptr_dst++;
			src++;
			return (ptr_dst);
		}
		n--;
	}
	return (NULL);
}
