/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esir <esir@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 12:28:32 by esir              #+#    #+#             */
/*   Updated: 2024/10/30 12:28:32 by esir             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nitems, size_t size)
{
	void	*a;
	size_t	tsize;

	tsize = nitems * size;
	a = malloc(tsize);
	if (a == NULL)
	{
		return (NULL);
	}
	ft_bzero(a, tsize);
	return (a);
}
