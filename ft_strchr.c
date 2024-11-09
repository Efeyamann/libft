/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:22:56 by esir              #+#    #+#             */
/*   Updated: 2024/10/23 13:41:27 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = (unsigned char) c;
	i = 0;
	while (s[i])
	{
		if (s[i] == a)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
