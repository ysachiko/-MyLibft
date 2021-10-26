/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 20:41:31 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/07 20:56:43 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	void			*res;

	i = 0;
	p = (unsigned char *)s;
	res = (void *)s;
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return (res);
		res++;
		i++;
	}
	return (NULL);
}
