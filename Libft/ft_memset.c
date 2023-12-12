/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 10:19:59 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/12 14:52:26 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *dest, int c, size_t len)

{
	size_t	i;
	char	*ptr;

	ptr = dest;
	i = 0;
	while (i < len)
	{
		ptr[i] = c;
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char array[] = "Hola Manola";
	int c ='A';
	size_t len = 4;
	printf("%s\n",ft_memset(array, c, len));
	return (0);
}
*/