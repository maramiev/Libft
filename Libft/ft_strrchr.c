/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 09:14:47 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/27 13:33:29 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	l;

	l = ft_strlen(s);
	while (l >= 0)
	{
		if (s[l] == (unsigned char)c)
		{
			return ((char *)&s[l]);
		}
		l--;
	}
	return (NULL);
}

int	main(void)
{
	printf("con mi funcion,%s\n", ft_strrchr("majo y maca", 'a'));
	printf("con la funcion original, %s\n", strrchr("majo y maca" , 'a'));
}