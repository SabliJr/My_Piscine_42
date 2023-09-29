/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 19:49:46 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/18 22:19:16 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		while (to_find[j] && (str[i + j] == to_find[j]))
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		else
		{
			j = 0;
			i++;
		}
	}
	if (to_find[j] == '\0')
		return (str + i);
	return (0);
}

/*
int main()
{
	char a[] = "apple is gggood for health";
	char t[] = "good";
	char *fo = ft_strstr(a, t);

	printf("%s", fo);
	if (fo == NULL)
		printf("fail to find");
	return 0;
}
*/	
