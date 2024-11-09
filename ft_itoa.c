/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/03 17:35:42 by esir              #+#    #+#             */
/*   Updated: 2024/11/09 13:29:06 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count_lenght(int n)
{
	int	i;

	i = 1;
	if (n < 0)
	{
		n = n * (-1);
	}
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

int	negative_check(int n)
{
	if (n < 0)
		return (1);
	else
	{
		return (0);
	}
}

int	*create_the_array(int n)
{
	int		*b;
	int		len;
	int		negative;
	int		i;
	int		a;

	len = count_lenght(n);
	negative = negative_check(n);
	b = (int *)malloc((len + negative) * sizeof(int));
	if (b == NULL)
		return (NULL);
	i = len + negative - 1;
	if (negative == 1)
		n = -n;
	while (i >= negative)
	{
		b[i--] = n % 10;
		n /= 10;
	}
	if (negative == 1)
		b[0] = 0;
	return (b);
}

char	*ft_itoa(int n)
{
	int		*in_arr;
	char	*ch_arr;
	int		len;
	int		i;
	int		negative;

	len = count_lenght(n);
	negative = negative_check(n);
	in_arr = create_the_array(n);
	ch_arr = (char *)malloc((len + negative + 1) * sizeof(char));
	i = 0;
	if (negative == 1)
	{
		ch_arr[i++] = '-';
		len++;
	}
	while (i < len)
	{
		ch_arr[i] = in_arr[negative] + '0';
		i++;
		negative++;
	}
	ch_arr[i] = '\0';
	return (ch_arr);
}
