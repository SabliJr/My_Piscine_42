/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 00:11:23 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 12:49:36 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb > 1)
		return (nb * ft_recursive_factorial(nb - 1));
	else if (nb == 0 || nb == 1)
		return (1);
	else
		return (0);
}

/*
#include <stdlib.h>
int main(int ac, char **av)
{
	(void)ac;
	printf("%d", ft_recursive_factorial(atoi(av[1])));
	return 0;
}
*/
