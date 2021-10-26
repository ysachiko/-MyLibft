/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 15:20:34 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/21 18:16:00 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *havstack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	char	*res;
	size_t	nlen;

	i = 0;
	j = 0;
	res = (char *)havstack;
	nlen = ft_strlen(needle);
	if (!(nlen))
		return (res);
	while (havstack[i] != '\0' && i < len)
	{
		while (havstack[i + j] == needle[j] && (i + j < len)
			&& havstack[i + j] != '\0')
		{
			j++;
		}
		if (j == ft_strlen(needle))
			return (res);
		j = 0;
		res++;
		i++;
	}
	return (NULL);
}
