/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:34:39 by esir              #+#    #+#             */
/*   Updated: 2024/11/04 17:37:38 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	lower(unsigned int n, char c)
{
	(void)n;
	c = c + 32;
	return (c);
}


char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*a;

	i = 0;
	a = (char *)malloc((ft_strlen(s) + 1) * sizeof(char));
	if (a == NULL)
		return (NULL);
	while (s[i])
	{
		a[i] = f(i, s[i]);
		i++;
	}
	a[i] = '\0';
	return (a);
}

#include <stdio.h>

int main()
{
	char a[] = "MERHABA";
	printf("%s", ft_strmapi(a, lower));
}
