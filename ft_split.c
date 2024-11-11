/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 19:14:58 by esir              #+#    #+#             */
/*   Updated: 2024/11/11 19:53:49 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_substrings(const char *s, char c)
{
	int	count;
	int	c_check;

	count = 0;
	c_check = 0;
	while (*s)
	{
		if (*s != c && !c_check)
		{
			c_check = 1;
			count++;
		}
		else if (*s == c)
		{
			c_check = 0;
		}
		s++;
	}
	return (count);
}

static void	split_free(char **ptr, int i)
{
	while (i > 0)
	{
		free(ptr[--i]);
	}
	free(ptr);
}

static char	**populate_strings(char **ptr, const char *s, char c)
{
	int	i;
	int	start;

	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		start = 0;
		while (s[start] && s[start] != c)
			start++;
		if (start > 0)
		{
			ptr[i] = (char *)malloc((start + 1) * sizeof(char));
			if (!ptr[i])
			{
				split_free(ptr, i);
				return (NULL);
			}
			ft_strlcpy(ptr[i++], s, start + 1);
		}
		s += start;
	}
	ptr[i] = NULL;
	return (ptr);
}

char	**ft_split(char const *s, char c)
{
	int		substring_count;
	char	**ptr;

	substring_count = count_substrings(s, c);
	ptr = (char **)malloc((substring_count + 1) * sizeof(char *));
	if (!ptr)
		return (NULL);
	return (populate_strings(ptr, s, c));
}
