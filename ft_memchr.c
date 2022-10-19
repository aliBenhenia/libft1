/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:25:06 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:25:11 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t	i;

	i = 0;
	p1 = (unsigned char *)s;
	p2 = NULL;
	while (*p1 && i < n - 1)
	{
		if (*p1 == (unsigned char)c)
		{
			p2 = p1;
			break ;
		}
		p1++;
		i++;
	}
	if (c == '\0')
	{
		return (p1);
	}
	return (p2);
}

