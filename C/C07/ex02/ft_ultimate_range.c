/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 09:01:51 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/21 20:40:48 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*arr;
	int	x;

	x = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (min < max)
		arr[x++] = min++;
	*range = arr;
	return (x);
}
