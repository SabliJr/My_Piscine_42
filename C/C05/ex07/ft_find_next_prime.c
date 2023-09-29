/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 19:06:24 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 12:57:27 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb == 1 || nb <= 0)
		return (0);
	while (i <= 46340)
	{
		if (nb % i == 0 && i > 1 && i < nb)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	if (nb < 2)
		return (2);
	while (i <= 2 * nb)
	{
		if (ft_is_prime(i))
			return (i);
		i++;
	}
	return (0);
}

/*
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d\n", ft_find_next_prime(atoi(argv[1])));
	return 0;
}
*/
