/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:59:14 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 12:36:27 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		first;
	int		last;
	int		i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	first = 0;
	last = ft_strlen(s1) - 1;
	while (s1[first] && ft_strchr(set, s1[first]) != NULL)
		first++;
	while (last >= first && ft_strchr(set, s1[last]) != NULL)
		last--;
	a = (char *)malloc((last - first + 2) * sizeof(char));
	if (!a)
		return (NULL);
	while (first <= last)
	{
		a[i] = s1[first];
		i++;
		first++;
	}
	a[i] = '\0';
	return (a);
}
