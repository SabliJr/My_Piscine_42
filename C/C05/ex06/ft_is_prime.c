/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:10:54 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 12:22:53 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_is_prime(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0 || nb == 1)
		return (0);
	while (i <= 46340)
	{
		if (nb % i == 0 && i > 1 && i < nb)
			return (0);
		i++;
	}
	return (1);
}

/*
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", ft_is_prime(atoi(argv[1])));
	return 0;
}
*/
