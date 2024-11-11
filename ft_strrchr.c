/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:41:51 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 12:44:22 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;

	i = ft_strlen(s);
	if (c == 0)
		return ((unsigned char *)&s[i]);
	while (i >= 0)
	{
		if ((unsigned char)s[i] == (unsigned char)c)
		{
			return ((unsigned char *)&s[i]);
		}
		i--;
	}
	return (NULL);
}
