/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 12:45:43 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/09 14:10:48 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)

{
	size_t			i;
	unsigned char	*s1;
	unsigned char	c2;

	s1 = (unsigned char *) s;
	c2 = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c2)
		{
			return ((void *)&s1[i]);
		}
		i++;
	}
	return (NULL);
}
/*
int	main(void)
{
	printf("con mi funcion,%s\n", ft_memchr("majo y maca", 'a', 5));
	printf("con la funcion original,%s\n", memchr("majo y maca", 'a', 5));
	return (0);
}*/