/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maramiev <maramiev@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 10:57:01 by maramiev          #+#    #+#             */
/*   Updated: 2024/01/29 13:04:32 by maramiev         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_countblock(char const *s, char c)
{
	int	i;
	int	num_box;

	num_box = 0;
	i = 0;
	if (!s[i])
		return (0);
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			num_box++;
			while (s[i] != c && s[i])
				i++;
		}
	}
	return (num_box);
}

static int	ft_countchar(char const *s, char c)
{
	int	i;
	int	numchar;

	i = 0;
	numchar = 0;
	while (s[i] != c && s[i])
	{
		i++;
		numchar++;
	}
	return (numchar);
}

void	ft_free(char **big_box)
{
	int	i;

	i = 0;
	while (big_box[i])
	{
		free(big_box[i]);
		i++;
	}
	free(big_box);
}

static char	**ft_copybox(char const *s, char c, char **big_box)
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
		{
			big_box[j] = malloc(sizeof(char) * (ft_countchar(&s[i], c) + 1));
			if (!big_box[j])
				return (ft_free(big_box), NULL);
			while (s[i] != c && s[i])
				big_box[j][k++] = s[i++];
			big_box[j++][k] = '\0';
			k = 0;
		}
	}
	big_box[j] = NULL;
	return (big_box);
}

char	**ft_split(char const *s, char c)
{
	char	**big_box;

	big_box = malloc(sizeof(char *) * (ft_countblock(s, c) + 1));
	if (big_box == NULL)
		return (NULL);
	big_box = ft_copybox(s, c, big_box);
	return (big_box);
}
/*
int	main(void)
{
	char	**resultado;

	resultado = ft_split("Hola soy, majo", ',');
	while (*resultado)
	{
		printf("el resultado es %s\n", *resultado++);
	}
	return (0);
}
*/
