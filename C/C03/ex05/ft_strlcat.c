/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 11:30:55 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/18 22:30:25 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <bsd/string.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	des_len;
	unsigned int	src_len;
	unsigned int	i;

	i = 0;
	des_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	if (size <= des_len)
		return (size + src_len);
	while (src[i] && ((des_len + i) < size - 1))
	{
		dest[des_len + i] = src[i];
		i++;
	}
	dest[des_len + i] = '\0';
	return (des_len + src_len);
}		
