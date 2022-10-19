/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 13:06:43 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 13:06:47 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/* 
char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	size_t	i;
	size_t	size;
	char	*p;

	size = ft_strlen(s) - 1;
	i = 0;
	if (start > size || len <= 0)
	{
		return ("");
	}
	p = (char *) malloc(len* sizeof(*s) + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	while (s[start] && start < len)
	{
		p[i] = s[start];
		i++;
		start++;
	}
	return (p);
} 
 */
char	*ft_substr(char const *s, unsigned int start,
size_t len)
{
	char *p = malloc(sizeof(*s) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	size_t i = 0;
	size_t j = 0;
	while (s[i])
	{
		if (i >= start && j <= len)
		{
			p[j] = s[i];
			j++;
		}
		i++;
	}
	p[j] = '\0';
	return (p);
}
int main()
{
	char *s = "hello bro i am here for you";
	printf("%s\n",ft_substr(s,4,9));
	return 0;
}
