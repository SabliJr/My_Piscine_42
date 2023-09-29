/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 21:02:19 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/08 14:35:36 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a / *b;
	*b = *a % *b;
	*a = temp;
}

/*
int	main()
{
	int a = 10;
	int b = 3;
	
	ft_ultimate_div_mod(&a, &b);
	printf("a = %d b = %d ", a, b);
	return (0);
}	*/
