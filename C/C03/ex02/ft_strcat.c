/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 09:18:19 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/16 16:25:03 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *s1, char *s2)
{
	int	dest_len;
	int	i;

	dest_len = 0;
	i = 0;
	while (s1[dest_len] != '\0')
		dest_len++;
	while (s2[i] != '\0')
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

	ft_strcat(a, b);
	//strcat(a, b);

	printf("%s", a);
}
*/
