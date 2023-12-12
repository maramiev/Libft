/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/05 12:05:27 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/12 14:52:33 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char		*dest;
	const char	*source;
	size_t		i;

	source = src;
	dest = dst;
	i = 0;
	if (dest == NULL && source == NULL)
	{
		return (NULL);
	}
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	const char src[11] = "Hola Juan";
	char *dest;

	dest = (char *)(src + 3);
	printf("antes = %s\n", dest);
	ft_memcpy(dest, src, ft_strlen(src)+1);
	printf("despues = %s\n", dest);
	return(0);
}*/
