/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat!.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:22:41 by esir              #+#    #+#             */
/*   Updated: 2024/11/04 14:49:50 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		i;
	size_t		j;
	int			a;
	int			b;

	i = 0;
	j = 0;
	a = ft_strlen(dst);
	b = ft_strlen(src);
	while (dst[i] != '\0')
		i++;
	while (src[j] != '\0' && (i + j) < dstsize - 1)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i + j] = '\0';
	return (a + b);
}
#include <stdio.h>
int main()
{
	char a[6] = "Hello";
	char b[25] = "Merhaba Dünya";
	printf("%zu\n", ft_strlcat(b, a, 25));
	printf("%s", b);
}