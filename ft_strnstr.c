/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 15:17:21 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 15:17:50 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/* static int	compare(const char *s1, const char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		s1++;
		s2++;
	}
	return (1);
}
 */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	if (*needle == '\0')
	{
		return ((char *)haystack);
	}
	if (!haystack && n == 0)
		return (NULL);
	size_t	i;
	size_t	j;

	i = 0;
	while (haystack[i] && i < n)
	{
		j = 0;
		while (needle[j] == haystack[i + j] && (i + j) < n)
		{
			j++;
			if (j == strlen(needle))
				return  ((char *)haystack + i);
		}
		i++;
	}
	return (NULL);
}
