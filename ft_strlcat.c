/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 10:31:45 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 10:31:49 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	if (!d && n == 0)
        return (ft_strlen(s));
	size_t dl = ft_strlen(d);
    size_t sl = ft_strlen(s);
    size_t i = 0;
    size_t t = 0;;
    if (n > dl)
    {
        i = n - dl;
        t = dl + sl;
        while (--i)
        {
            d[dl++] = *s++;
        }
        d[dl] = '\0';
        return (t);
    }
    
    return (sl + n);
}
