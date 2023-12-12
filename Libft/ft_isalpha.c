/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 13:46:43 by maramiev          #+#    #+#             */
/*   Updated: 2023/12/07 10:45:46 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalpha(int c)

{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
/*int	main(void)
{
	int	string1 = 'H';
	
	printf("El resultado aplicando mi funcion es : %d\n", ft_isalpha(string1));	 
	printf("El resultado con la f original es : %d\n", isalpha(string1));
	return(0);
}*/
