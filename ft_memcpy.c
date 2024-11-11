/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:53:59 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 13:37:28 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t		i;
	char		*a;
	const char	*b;

	if ((dst == NULL && src == NULL) && n > 0)
		return (NULL);
	a = (char *)dst;
	b = (const char *)src;
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}
	return (dst);
}
