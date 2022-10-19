/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:25:53 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:25:57 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char* p;
    size_t  i;

    i = 0;
    p = (unsigned char *)b;
    while(i < len)
    {
        p[i] = (unsigned char)c;
        i++;
    }
    return p;
}
