/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/30 09:14:01 by lramela           #+#    #+#             */
/*   Updated: 2019/06/18 11:39:39 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char *tmp;

	tmp = NULL;
	if ((char)c == '\0')
	{
		tmp = (char *)s + ft_strlen((char *)s);
		return (tmp);
	}
	while (*s)
	{
		if (*s == (char)c)
			tmp = (char *)s;
		s++;
	}
	return (tmp);
}
