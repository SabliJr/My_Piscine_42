/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 21:53:11 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 15:15:51 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n);

int		main()
{
	int i;
	char dest[] = "Epic fail !!!!!";
	char src[] = "Success";
	printf("%s\n%s\n%s\n", src, ft_strncpy(dest, src, 15), dest);
	i = 9;
	while (i < 15)
	{
		if (dest[i] != '\0')
		{
			printf("FAIL! Remainder of dst must be filled with `\\0' characters, got %c (\\%x) at pos %d\n", dest[i], dest[i], i);
			return (1);
		}
		i++;
	}
	return (0);
}

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
int main()
{
	char name[] = "sabli";
	char namecpy[50];

	ft_strncpy(namecpy, name, 3);

	int x = 0;
	while (x < 3)
	{
		write(1, &namecpy[x], 1);
		x++;
	}
	return 0;
}
*/
