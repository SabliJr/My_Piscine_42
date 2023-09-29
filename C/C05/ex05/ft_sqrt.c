/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 12:18:48 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 12:47:34 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb < 0)
		return (0);
	while (i * i != nb && i <= 46340)
		i++;
	if (i * i == nb)
		return (i);
	else
		return (0);
}

/*
int main(int argc, char *argv[])
{
	(void)argc;
	printf("%d", ft_sqrt(atoi(argv[1])));
	return 0;
}
*/	
