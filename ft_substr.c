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
	size_t	s_len;

	s_len = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	tsize = len + 1;
	a = (char *)malloc(tsize);
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		a[i] = s[start];
		i++;
		start++;
	}
	a[i] = '\0';
	return (a);
}
