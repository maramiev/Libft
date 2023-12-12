/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 08:36:51 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/07 10:41:50 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		str[i] = '\0';
		i++;
	}
}
/*
int	main(void)
{
	char pba[] = "Hola";
	
	printf("El resultado con mi funcion es: %s\n", ft_bzero(pba, 2));
	printf("El resultado con la original es: %s\n", bzero(pba, (2)));
	return (0);
}
//Es de recordar que  esta funcion no retorna nada 
//s : es el string que sera remplazado por nulos 
//size_t n o int nbyte :especifica*/