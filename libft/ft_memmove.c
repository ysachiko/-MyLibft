/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/06 12:40:44 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/21 17:30:54 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*tmpsrc;
	unsigned char	*tmpdst;

	if ((dst == NULL) && (src == NULL))
		return (NULL);
	tmpsrc = (unsigned char *)src;
	tmpdst = (unsigned char *)dst;
	if ((tmpsrc < tmpdst) && (tmpdst < tmpsrc + len))
	{
		tmpdst += len;
		tmpsrc += len;
		while (len)
		{
			*--tmpdst = *--tmpsrc;
			len--;
		}
	}
	else
	{
		while (len--)
		{
			*tmpdst++ = *tmpsrc++;
		}
	}
	return (dst);
}
