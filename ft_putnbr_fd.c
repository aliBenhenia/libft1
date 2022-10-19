/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abenheni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:35:06 by abenheni          #+#    #+#             */
/*   Updated: 2022/10/12 19:35:07 by abenheni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		ft_putchar_fd('-',fd);
		n = n * -1;
	}
	if (n / 10 == 0)
	{
		ft_putchar_fd(n + 48,fd);
	}
	else
	{
		ft_putnbr_fd(n / 10,fd);
		ft_putchar_fd((n % 10) + 48,fd);
	}
	
}
