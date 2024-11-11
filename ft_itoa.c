/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:35:42 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 16:27:27 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_slen(int n)
{
	int	digit;

	digit = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		if (n == -2147483648)
			return (11);
		n = -n;
		digit++;
	}
	while (n > 0)
	{
		n = n / 10;
		digit++;
	}
	return (digit);
}

static char	*ft_mod(char *s, int nlen, int n)
{
	if (n < 0)
	{
		s[0] = '-';
		n = -n;
	}
	if (n == 0)
	{
		s[0] = '0';
		s[1] = '\0';
		return (s);
	}
	s[nlen] = '\0';
	while (n > 0)
	{
		s[--nlen] = (n % 10) + '0';
		n = n / 10;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char	*s;
	int		nlen;

	if (n == -2147483648)
	{
		s = (char *)malloc(sizeof(char) * 12);
		if (s == NULL)
			return (NULL);
		s[0] = '-';
		s[1] = '2';
		n = 147483648;
		nlen = 11;
	}
	else
	{
		nlen = ft_slen(n);
		s = (char *)malloc(sizeof(char) * (nlen + 1));
		if (s == NULL)
			return (NULL);
	}
	return (ft_mod(s, nlen, n));
}
