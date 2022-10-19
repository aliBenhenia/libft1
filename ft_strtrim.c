/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 09:49:34 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/14 09:49:35 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
 #include "libft.h"

static char	*subs(const char *s,int start,int end)
{
	char *p = malloc(end + start + 2);
	int i = 0;
	while (start <= end)
	{
		*(p+i) = s[start++];
		i++;
	}
	*(p + i) = '\0';
	return p;
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int start = 0;
	int t ;
	int len = ft_strlen(s1) - 1;
	t = len;
	int i = 0;
	while (s1[i])
	{
		if(ft_strchr(set,s1[i]) != NULL)
		{
			start++;
		}
		else
		{
			break;
		}
		i++;
	}
	while (s1[len])
	{
		if(ft_strrchr(set,s1[len]) != NULL)
		{
			t--;
		}
		else
		{
			break;
		}
		len--;
	}
	char *sub = malloc(t - start + 2);
	sub = subs(s1,start , t);
	return (sub);
}