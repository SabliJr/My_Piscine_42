/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 23:44:02 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 14:44:48 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_numeric(char *str)
{
	int	sign;

	sign = 1;
	if (*str == '\0')
		return (sign);
	while (*str != '\0')
	{
		if (!(*str >= '0' && *str <= '9'))
			sign = 0;
		str++;
	}
	return (sign);
}

/*
int main()
{
	char a[] = "ikdj9";
	char b[] = "9ojdm";
	char c[] = "176";
	char v[] = ("");

	int _1 = ft_str_is_numeric(a);
	int _2 = ft_str_is_numeric(b);
	int _3 = ft_str_is_numeric(c);
	int _4 = ft_str_is_numeric(v);
	printf("%d, %d, %d, %d", _1, _2, _3, _4);

	return 0;
}
*/
