/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 10:11:30 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/08 11:45:34 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*s_1;
	unsigned char	*s_2;
	size_t			i;

	s_1 = (unsigned char *)s1;
	s_2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (s_1[i] != s_2[i])
		{
			return (s_1[i] - s_2[i]);
		}
		i++;
	}
	return (0);
}
/*
int	main(void)

{
	char *s1 = "majo y aca";
	char *s2 = "majo y mica";

	printf("con mi funcion,%d\n", ft_memcmp(s1, s2, 10));
	printf("con la funcion original,%d\n", memcmp(s1, s2, 10));

	return (0);
}*/