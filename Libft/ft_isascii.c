/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:40:46 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/11 13:02:56 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("El resultado de mi f. es :%d\n", ft_isascii('a'));
	printf("El resultado de mi f. 2ej es:%d\n", ft_isascii('0248'));
	printf("El resultado con la f. original es:%d\n", isascii('Z'));
	printf("El resultado con la f. original 2ej es:%d\n", isascii('0200'));
}*/
