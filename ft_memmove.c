/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 15:40:35 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 13:38:22 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	if ((dst == NULL && src == NULL) && len > 0)
		return (NULL);
	if (dst > src)
	{
		x = len;
		while (x > 0)
		{
			x--;
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
		}
	}
	else
	{
		ft_memcpy(dst, src, len);
	}
	return (dst);
}
