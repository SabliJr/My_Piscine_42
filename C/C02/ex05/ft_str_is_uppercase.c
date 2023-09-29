/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:07:35 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:51:27 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_uppercase(char *str)
{
	int	sign;
	int	k;

	sign = 1;
	k = 0;
	if (str[k] == '\0')
		return (sign);
	while (str[k] != '\0')
	{
		if (!(str[k] >= 'A' && str[k] <= 'Z'))
			sign = 0;
		str++;
	}
	return (sign);
}

/*
int main()
{
	char a[] = "jduOOWII";
	char v[] = "YUjdj";
	char d[] = "UIWJKJ";
	char g[] = "0982";

	int res1 = ft_str_is_uppercase(a);
	int res2 = ft_str_is_uppercase(v);
	int res3 = ft_str_is_uppercase(d);
	int res4 = ft_str_is_uppercase(g);

	printf("%d, %d, %d, %d", res1, res2, res3, res4);

	return 0;
}
*/
