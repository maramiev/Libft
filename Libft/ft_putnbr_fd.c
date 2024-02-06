/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 11:00:31 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/31 13:46:32 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	num_ent;

	num_ent = n;
	if (num_ent < 0)
	{
		ft_putchar_fd('-', fd);
		num_ent = num_ent * -1;
	}
	if (num_ent > 9)
	{
		ft_putnbr_fd(num_ent / 10, fd);
		ft_putnbr_fd(num_ent % 10, fd);
	}
	else
		ft_putchar_fd(num_ent + '0', fd);
}
/*
int	main(void)
{
	ft_putnbr_fd('2000', 1);
	return (0);
}*/
