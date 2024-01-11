/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 10:00:35 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/02 09:29:41 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t len)

{
	size_t	pos;
	size_t	src_len;
	size_t	i;
	size_t	j;

	pos = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = pos;
	j = 0;
	if (len <= pos)
	{
		return (len + src_len);
	}
	while (j < len - pos - 1 && src[j] != 0)
	{
		dst[i++] = src[j++];
	}
	dst[i] = '\0';
	return (pos + src_len);
}
/*
int main(void)
{
	char	dst[20] = "Hola";
	char	src[20] = "Mundo";
	char	dst2[20] = "Hola";

	printf("Cadena resultante %zu\n", ft_strlcat(dst, src, 20));
	printf("Cadena con funcion original %zu\n", strlcat(dst2, src, 20));
}
1 er linea calcula la longitud actual de la cadena destino (dst)*/
/*si la long (len)es < o = a la posicion actual ,no concatena y retorna pos*/