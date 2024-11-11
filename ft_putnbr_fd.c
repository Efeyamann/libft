/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 16:53:51 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 16:31:36 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	write_number(int number, int fd)
{
	char	x;

	x = number + '0';
	write(fd, &x, 1);
}

static void	divide(int n, int fd)
{
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		return ;
	}
	if (n >= 0 && n <= 9)
	{
		write_number((n), fd);
		return ;
	}
	if (n < 0)
	{
		write(fd, "-", 1);
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
