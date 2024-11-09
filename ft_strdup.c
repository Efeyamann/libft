/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:30:12 by esir              #+#    #+#             */
/*   Updated: 2024/10/30 12:30:12 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*a;
	int		tsize;
	int		i;

	i = 0;
	tsize = (ft_strlen(s) * sizeof(char)) + 1;
	a = (char *)malloc(tsize);
	if (a == NULL)
	{
		return (NULL);
	}
	while (s[i])
	{
		a[i] = s[i];
		i++;
	}
	a[i] = '\0';
	return (a);
}
