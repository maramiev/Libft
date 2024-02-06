/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 13:22:30 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/24 14:26:00 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*result;
	int				i;
	unsigned int	long_s;
	size_t			j;

	long_s = ft_strlen(s);
	if (start >= long_s)
		return (ft_strdup(""));
	else if (long_s - start < len)
		len = long_s - start;
	result = (char *)malloc((len + 1) * sizeof(char));
	if (!result)
		return (NULL);
	if (len > long_s - start)
		len = long_s - start;
	j = start;
	i = 0;
	while (s[j] != '\0' && len != 0)
	{
		result[i++] = s[j++];
		len--;
	}
	result[i] = '\0';
	return (result);
}
/*
int main(void)
{
	char const	*salida = "ABCDEF";

	printf("Resultado\n%s", ft_substr(salida, 2, 3));
	return (0);
}*/
