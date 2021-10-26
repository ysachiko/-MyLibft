/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/07 18:18:02 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/21 17:49:12 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*new;
	size_t	size;

	size = ft_strlen(s1) + 1;
	new = (char *)malloc(size * sizeof(char));
	if (!new)
		return (NULL);
	ft_memcpy(new, s1, size);
	return (new);
}
