/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 12:43:04 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/14 13:48:21 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)

{
// incializamos el indice 
	size_t i = 0;
	if (dsize > 0)
	{
		//aqui copio caracteres de src a destino hasta size -1 
		while ( i < dsize -1 && src [i] != '\0')
	   	{
			dst[i] = src[i];
			i++; 
		}
		dst[i] = '\0';

	}
	return (ft_strlen(src));
	
}
/*
int main(void) 
{
	size_t dsize = 3;
	const char *src = "Hi";
	char dst[20] = "Hola";
	
//	printf("Devuelve el de mi dest :%s\n", dst);
//	printf("El resultado con mi funcion es: %s\n", dst);
	printf("El resultado con la funcion original es: %zu\n", strlcpy( dst, src, 0));
	printf("El resultado con la funcion es: %zu\n", ft_strlcpy(dst, src, 0));

	return (0);
}*/
