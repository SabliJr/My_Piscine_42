/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:50:59 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/20 09:19:39 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power > 0)
	{
		res *= nb;
		power--;
	}
	return (res);
}

/*
int main()
{
	printf("%d", ft_iterative_power(2, 3));
	return 0;
}
*/
