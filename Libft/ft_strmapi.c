/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 13:45:12 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/29 15:02:27 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	l;
	char	*resultado;

	l = ft_strlen(s);
	resultado = (char *) malloc(sizeof (char) *(l + 1));
	if (!resultado)
		return (NULL);
	i = 0;
	while (i < l)
	{
		resultado[i] = (*f)(i, s[i]);
		i++;
	}
	resultado[i] = '\0';
	return (resultado);
}
