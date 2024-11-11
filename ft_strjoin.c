/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:36:04 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 13:21:49 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	int		k;
	int		l;
	char	*a;

	k = ft_strlen(s1) + ft_strlen(s2) + 1;
	i = ft_strlen(s1);
	j = 0;
	l = 0;
	a = (char *)malloc(k * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (s1[j])
	{
		a[l++] = s1[j++];
	}
	j = 0;
	while (s2[j])
	{
		a[l++] = s2[j++];
	}
	a[l] = '\0';
	return (a);
}
