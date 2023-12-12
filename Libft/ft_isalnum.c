/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 11:51:56 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/07 10:45:51 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isalnum(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122) || (c >= 48 && c <= 57))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf ("El resultado aplicando mi funcion es : %d\n", ft_isalnum('!'));
	printf("El resultado aplicado otro ej es: %d\n", ft_isalnum('1'));
	printf("El resultado con la f. original es :%d\n", isalnum('@'));
	printf("El resultado con la f. original ej2 es :%d\n", isalnum('f'));
}*/
