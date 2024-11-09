/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:53:51 by esir              #+#    #+#             */
/*   Updated: 2024/11/03 17:00:55 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	write_number(int number, int fd)
{
	char	x;

	x = number + '0';
	write(fd, &x, 1);
}

void	divide(int n, int fd)
{
	if (n >= 0 && n <= 9)
	{
		write_number((n), fd);
		return ;
	}
	if (n < 0)
	{
		write(1, "-", 1);
		divide((-n), fd);
		return ;
	}
	divide((n / 10), fd);
	write_number((n % 10), fd);
}

void	ft_putnbr_fd(int n, int fd)
{
	divide(n, fd);
}
