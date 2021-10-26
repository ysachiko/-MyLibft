/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strlcat.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 14:14:12 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/19 13:43:24 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t			dlen;
	size_t			n;
	char			*c;
	const char		*s;

	n = dstsize;
	s = src;
	c = (char *)dst;
	while (n-- != 0 && *c != '\0')
		c++;
	dlen = c - dst;
	n = dstsize - dlen;
	if (n == 0)
		return (dlen + ft_strlen(s));
	while (*s != '\0')
	{
		if (n != 1)
		{
			*c++ = *s;
			n--;
		}
		s++;
	}
	*c = '\0';
	return (dlen + (s - src));
}
