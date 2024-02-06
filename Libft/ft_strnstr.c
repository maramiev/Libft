/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 11:35:51 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/31 13:32:05 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (*little == '\0')
	{
		return ((char *)&big[i]);
	}
	while (i < len && big[i])
	{
		j = 0;
		while (i + j < len && big [i + j] == little[j])
		{
			if (little [j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (0);
}
/*
int	main()
{
	printf("Con mi funcion es %s\n",ft_strnstr("mundo", " ", 10));
	printf("Con la original es %s\n", strnstr("mundo", "da", 10));
	return (0);
}*/