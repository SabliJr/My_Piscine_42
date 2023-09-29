/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 08:57:45 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/20 09:22:01 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	if (power % 2 == 0)
		return (ft_recursive_power((nb * nb), (power / 2)));
	else
		return (nb * ft_recursive_power((nb * nb), (power / 2)));
}

/*
int main()
{
	printf("%d", ft_recursive_power(2, 3));
	return 0;
}
*/
