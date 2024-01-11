/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/20 12:57:15 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/02 10:00:53 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)

{
	if (c >= 97 && c <= 122)
	{
		return (c - 32);
	}
	return (c);
}
/*
int main ()
{
	char c1 = 'h';
	char c2 = 'h';
	printf("El resultado con mi codigo es %c\n", ft_toupper(c1));
	printf("El resultado con la original es %c\n",toupper(c2));
}*/
