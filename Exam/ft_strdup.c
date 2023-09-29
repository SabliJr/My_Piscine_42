/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:48:39 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/26 16:16:53 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str);
char *ft_strdup(char *str);

/*
int main(int argc, char *argv[])
{
	(void)argc;
	int x;

	x = 0;
	char *print = ft_strdup(argv[1]);
	while (print[x])
	{
		write(1, &print[x], 1);
		x++;
	}
	return (0);
}
*/

char *ft_strdup(char *str)
{
	int i;
	char *dest;

	i = 0;
	if (!(dest = (char *)malloc(sizeof(char) * ft_strlen(str) + 1)))
		return (0);
	while (str[i])
	{
		dest[i] = str[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
