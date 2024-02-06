/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 11:56:36 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/17 11:36:17 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			i;
	unsigned char	*memory;

	i = 0;
	memory = malloc (count * size);
	if (memory == NULL)
	{
		return (NULL);
	}
	while (i < (count * size))
	{
		memory[i] = '\0';
		i++;
	}
	return (memory);
}

/*
int	main(void)

{
	size_t			count2;
	size_t			sizet2;	
	
	count2 = 5;
	sizet2 = 4;
	printf("Con mi funcion : %p\n", ft_calloc(count2, sizet2));
	printf("Con la original: %p\n", calloc(count2, sizet2));
}*/
