/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 12:51:01 by esir              #+#    #+#             */
/*   Updated: 2024/11/04 13:53:24 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char	*a;
	size_t	i;

	i = 0;
	a = (char *)b;
	while (i < len)
	{
		a[i] = (char)c;
		i++;
	}
	return (b);
}

#include <stdio.h>
int main()
{
	//negatif sayıların da mantığını anla
	int a[] = {-120, 46, 89};
	ft_memset(a, 254, 8);
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
	printf("%d", a[2]);
}
