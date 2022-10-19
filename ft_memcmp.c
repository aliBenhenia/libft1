/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 12:25:30 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/10 12:25:39 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	 
	int	dif;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;

	dif = 0;
	while (n)
	{
		if (*p1 != *p2)
		{
			return (*p1 - *p2);
		}
		p1++;
		p2++;
		n--;
	}
	return (dif);
}
/* int main(int argc, char const *argv[])
{
	 	char *s1 = "atoms\0\0\0\0";
        char *s2 = "atoms\0abc";
        size_t size = 8;
        int i1 = memcmp(s1, s2, size);
        int i2 = ft_memcmp(s1, s2, size);

        if (i1 == i2)
                 printf("yyy\n");
       else{
		printf("nn\n");
	   }
	   printf("%d\n",i1);
	   printf("%d\n",i2);
	return 0;
}
 */