/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:32:19 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/16 16:30:04 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strncat(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	dest_len;

	dest_len = 0;
	i = 0;
	while (s1[dest_len] != '\0')
		dest_len++;
	while (i < n && s2[i] != '\0')
	{
		s1[dest_len + i] = s2[i];
		i++;
	}
	s1[dest_len + i] = '\0';
	return (s1);
}

/*
int main()
{
	char a[100] = "my name is ";
	char b[] = "sabli";
	//int len = sizeof(b) / sizeof(char);

	//ft_strncat(a, b, 3);
	strncat(a, b, 3);

	printf("%s", a);
	//printf("%s", a);
}
*/
