/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/07 10:51:39 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/13 12:01:30 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char		*s1;
	const unsigned char	*s2;

	s1 = (unsigned char *)dst;
	s2 = (const unsigned char *)src;
	if (s2 < s1)
	{
		while (len-- > 0)
		{
			s1[len] = s2[len];
		}
	}
	else if (s1 <= s2)
	{
		ft_memcpy (dst, src, len);
	}
	return (dst);
}
/*
int	main(void)
{
    char src[15] = "Hola, Manolo";
	char dst[15];

	printf("El resultado con mi funcion es: %s\n", ft_memmove(dst, src, 5));
	printf("El resultado con la oroginal es %s\n", memmove(dst, src, 5));
	return (0);
}*/
