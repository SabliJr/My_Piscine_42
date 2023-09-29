/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:18:22 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 22:56:52 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*arr_cpy;
	int		i;

	i = 0;
	arr_cpy = (char *)malloc(sizeof(char) * ft_strlen(src) + 1);
	if (arr_cpy == NULL)
		return (NULL);
	while (*src != '\0')
		arr_cpy[i++] = *src++;
	arr_cpy[i] = '\0';
	return (arr_cpy);
}

/*
int main()
{
	char t[] = "name";

	printf("%s", ft_strdup(t));
	return (0);
}
*/
