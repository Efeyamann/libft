/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:31:59 by esir              #+#    #+#             */
/*   Updated: 2024/10/30 12:31:59 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*a;
	size_t	tsize;
	size_t	i;
	char	*c;

	c[0] = "";
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (c);
	i = 0;
	tsize = (len * sizeof(char)) + 1;
	a = (char *)malloc(tsize);
	if (a == NULL)
	{
		return (NULL);
	}
	while (s[start] != '\0' && i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
