/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 10:18:25 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/30 13:28:28 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_inset(char c, const char *set)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
		{
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		start;
	int		end;
	int		i;
	char	*result;

	if (!s1 || !set)
		return (0);
	start = 0;
	end = ft_strlen(s1);
	i = 0;
	while (s1[start] && is_inset(s1[start], set))
		start ++;
	while (end > start && is_inset(s1[end - 1], set))
		end --;
	result = malloc(sizeof(*s1) * (end - start + 1));
	if (!result)
		return (NULL);
	while (start < end)
	{
		result[i++] = s1[start++];
	}
	result[i] = '\0';
	return (result);
}
/*
int	main(void)
{
	char	*string;

	string = "dallladilidac";
	printf("El resultado es : %s\n ", ft_strtrim (string, "cla"));
	return (0);
}
*/
