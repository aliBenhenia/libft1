/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:26:15 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:26:20 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	int	i;

	i = 0;
	p = NULL;
	
	while (s[i])
	{
		if (s[i] == c)
		{
			p = (char *)s + i;
			break ;
		}
		i++;
	}
	if (!c)
		return ((char *)s + i);
	return (p);
}
