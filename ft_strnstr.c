/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 14:12:06 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 13:43:15 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*needle == '\0')
		return ((char *)haystack);
	while (haystack[i] != '\0' && i < len)
	{
		j = 0;
		while (haystack[i] != '\0' && haystack[i + j] == needle[j] && j < len
			&& i + j < len)
		{
			j++;
			if (j == ft_strlen(needle))
			{
				return ((char *)&haystack[i]);
			}
		}
		i++;
	}
	return (NULL);
}
