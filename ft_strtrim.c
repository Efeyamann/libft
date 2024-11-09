/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:59:14 by esir              #+#    #+#             */
/*   Updated: 2024/10/30 14:57:26 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*a;
	int		first;
	int		last;
	int		first_flag;
	int		last_flag;

	last = ft_strlen(s1) - 1;
	first = 0;
	first_flag = 0;
	last_flag = 0;
	while ((first < last) && (first_flag == 0 || last_flag == 0))
	{
		if ((ft_strchr(set, s1[first]) != NULL) && (first_flag == 0))
			first++;
		else
			first_flag = 1;
		if ((ft_strchr(set, s1[last]) != NULL) && (last_flag == 0))
			last--;
		else
			last_flag = 1;
	}
	a = (char *)malloc((last - first + 1) * sizeof(char));
	return (a);
}
