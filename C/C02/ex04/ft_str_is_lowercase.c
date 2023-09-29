/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:57:15 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:46:49 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_str_is_lowercase(char *str)
{
	int	sign;

	sign = 1;
	if (*str == '\0')
		return (sign);
	while (*str != '\0')
	{
		if (!(*str >= 'a' && *str <= 'z'))
			sign = 0;
		str++;
	}
	return (sign);
}

/*
int main()
{
	char a[] = "hdjUkdk";
	char b[] = "jdki";
	char v[] = "(0uejK";
	char n[] = "0889";

	int _1 = ft_str_is_lowercase(a);
	int _2 = ft_str_is_lowercase(b);
	int _3 = ft_str_is_lowercase(v);
	int _43 = ft_str_is_lowercase(n);

	printf("%d, %d, %d, %d", _1, _2, _3, _43);

	return 0;
}
*/
