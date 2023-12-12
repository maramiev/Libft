/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:00:37 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/07 10:45:33 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isdigit(int c)

{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("El resultado aplicando mi funcion es : %d\n", ft_isdigit('0'));
	printf("El resultado aplicando un 2do ejemplo es : %d\n",ft_isdigit('a'));
	printf("El resultado aplicando la funcion es : %d\n", isdigit('0'));
	printf("El resultado aplicando la f. 2 do ej es: %d\n", isdigit('b'));
}*/
