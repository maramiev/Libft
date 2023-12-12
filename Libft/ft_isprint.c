/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 14:08:00 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/12 14:52:34 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>

int	ft_isprint(int c)
{
	if ((c >= 32 && c <= 126))
	{
		return (1);
	}
	return (0);
}
/*
int	main(void)
{
	printf("El resultado con mi funcion es : %d\n", ft_isprint('a'));
	printf("El resultado con la original es :%d\n", isprint(' '));
	return (0);
}*/
