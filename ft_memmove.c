/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 08:34:07 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 08:34:11 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *dd = dst;
    char *ss = (char*)src;
	if (!dd && !ss)
	{
		return (NULL);
	}
	
    char *t = malloc(len);
	if (t == NULL)
	{
		return (NULL);
	}
	
    ft_memcpy(t,ss,len);
    ft_memcpy(dd,t,len);
    free(t);
    return (dd);
}
