/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 23:49:14 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 12:42:26 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	res;
	int	i;

	res = 1;
	i = 1;
	if (nb < 0)
		return (0);
	if (nb < 2)
		return (1);
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

/*
int main()
{
	printf("%d", ft_iterative_factorial(10));
	return 0;
}
*/
