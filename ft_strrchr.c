/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:27:14 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:27:33 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;
	char	*p;
	if (*s == '\0')
	{
		return (NULL);
	}
	
	p = NULL;
	len = ft_strlen(s) - 1;
	while (len) 
	{
		if (s[len - 1] == c)
		{
			p = (char *) s + len - 1;
			break ;
		}
		len--;
	}
	if (c == '\0')
	{
		return ("");
	}
	return (p);
}
