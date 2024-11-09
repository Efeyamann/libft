/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 13:41:51 by esir              #+#    #+#             */
/*   Updated: 2024/10/23 13:47:10 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	unsigned char	a;

	a = (unsigned char) c;
	i = ft_strlen(*s);
	i--;
	while (s[i])
	{
		if (s[i] == a)
		{
			return (&s[i]);
		}
		i--;
	}
	return (NULL);
}
