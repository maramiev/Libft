/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/04 11:22:15 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/11 11:26:06 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	res;
	int	np;
	int	i;

	res = 0;
	i = 0;
	np = 1;
	while (str[i] == 32 || (str[i] > 8 && str[i] < 14))
		i++;
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			np = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (np * res);
}
/*
int main ()
{
	const char	str1[]= "-123Hola";
	
	printf("con mi funcion %d\n", ft_atoi(str1));
	printf("con la original %d\n", atoi(str1));
	return (0);
}*/
