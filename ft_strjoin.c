/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 15:32:25 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 15:32:26 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	*ft_strcpy(char *dst, const char *src)
{
	while (*src)
	{
		*dst++ = *src++;
	}
	*dst = '\0';
	return (dst);
}

static char	*ft_strcat(char *s1, const char *s2)
{
	s1 = s1 + ft_strlen(s1);
	while (*s2)
	{
		*s1++ = *s2++;
	}
	*s1 = '\0';
	return (s1);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	if (!s1 || !s2)
	{
		return (NULL);
	}
	
	p = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	ft_strcpy(p, s1);
	ft_strcat(p, s2);
	return (p);
}
