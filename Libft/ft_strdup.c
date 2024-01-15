/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/11 12:32:29 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/15 12:16:04 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*memory;
	int		i;

	memory = malloc(sizeof(char) * ft_strlen(s1) + 1);
	if (memory == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (s1[i] != '\0')
	{
		memory [i] = s1[i];
		i++;
	}
	memory[i] = '\0';
	return (memory);
}
/*
int main()

{
	printf("Con mi funcion es %s\n",ft_strdup("Muñeca"));
	printf("Con la original es %s\n", strdup("Muñeca"));
}*/