/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/17 12:57:23 by lramela           #+#    #+#             */
/*   Updated: 2019/06/21 10:52:57 by lramela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		ft_nbwords(char const *s, char c)
{
	int		i;
	int		words;

	i = 0;
	words = 0;
	while (*(s + i))
	{
		while (*(s + i) == c)
			i++;
		if (*(s + i))
			words++;
		while (*(s + i) && *(s + i) != c)
			i++;
	}
	return (words);
}

static	void	ft_split(char **tab, char const *str, char delimiter)
{
	int		i;
	int		words;
	size_t	counter;
	size_t	len;

	i = 0;
	counter = 0;
	len = 0;
	words = ft_nbwords(str, delimiter);
	while (words - i)
	{
		while (str && *(str + counter) == delimiter)
			counter++;
		while (str && *(str + counter + len) &&\
			*(str + counter + len) != delimiter)
			len++;
		tab[i] = ft_strsub(str, counter, len);
		counter += len;
		len = 0;
		i++;
	}
	tab[i] = NULL;
}

char			**ft_strsplit(char const *s, char c)
{
	char		**tab;

	tab = NULL;
	if (!s)
		return (tab);
	tab = (char **)malloc(sizeof(char *) * (ft_nbwords((char *)s, c) + 1));
	if (!tab)
		return (NULL);
	ft_split(tab, s, c);
	return (tab);
}
