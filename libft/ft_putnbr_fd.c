/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 18:47:45 by ysachiko          #+#    #+#             */
/*   Updated: 2021/10/21 19:57:55 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_rec(int n, int fd)
{
	int	zn;

	zn = 1;
	if (n < 0)
		zn = -1;
	if (n > 9 || n < -9)
	{
		ft_rec(n / 10, fd);
		ft_rec(n % 10, fd);
	}
	else
		ft_putchar_fd((zn * n) + '0', fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
		ft_putchar_fd('-', fd);
	ft_rec(n, fd);
}
