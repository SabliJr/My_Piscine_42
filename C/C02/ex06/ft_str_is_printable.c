/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 00:19:17 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 13:19:31 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

int	ft_str_is_printable(char *str)
{
	int	sign;
	int	q;

	sign = 1;
	q = 0;
	if (str[q] == '\0')
		return (sign);
	while (str[q] != '\0')
	{
		if (!(is_printable(str[q])))
			sign = 0;
		q++;
	}
	return (sign);
}
