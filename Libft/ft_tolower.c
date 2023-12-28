/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 08:36:47 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/26 09:08:26 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)

{
	if (c >= 65 && c <= 90)
	{
		return (c + 32);
	}
	return (c);
}
/*int main ()
{
	char c1 = 'h';
	char c2 = 'h';

	printf("El resultado con mi codigo es %c\n",ft_tolower(c1));
	printf("El resultado con la original es %c\n",tolower(c2));
}*/