/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 10:11:08 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/18 13:29:11 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	all_size;
	char	*result;

	if (!s1 || !s2)
	{
		if (s1)
			return (ft_strdup(s1));
		else if (s2)
			return (ft_strdup(s2));
		else
			return (ft_strdup(""));
	}
	all_size = ft_strlen(s1) + ft_strlen(s2);
	result = (char *)malloc((all_size +1) * sizeof(char));
	if (!result)
		return (NULL);
	i = 0;
	while (*s1)
		result[i++] = *s1++;
	while (*s2)
		result[i++] = *s2++;
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "Muñeca";
	s2 = "Playmobil";
	printf("Con mi funcion es \n%s", ft_strjoin(s1 ,s2));
	return (0);
}*/