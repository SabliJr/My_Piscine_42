/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/18 08:30:03 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/22 10:33:55 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*arr;
	int	i;

	i = 0;
	if (min >= max)
		return (NULL);
	arr = (int *)malloc(sizeof(int) * (max - min));
	if (arr == NULL)
		return (NULL);
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
