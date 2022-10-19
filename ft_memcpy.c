/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 15:17:36 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/11 15:18:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*dd ;
	char	*ss ;

	dd = (char *)dst;
	ss = (char *)src;
	if (!dd && !ss)
	{
		return (NULL);
	}
	
		while (n)
		{
			*dd = *ss;
			dd++;
			ss++;
			n--;
		}
	return (dst);
}
