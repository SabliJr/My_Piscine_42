/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 16:03:03 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/26 16:15:52 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int *ft_range(int min, int max);

/*
int main(int argc, char *argv[])
{
	(void)argc;
	int	i;
	int *tab;

	i = 0;
	tab = ft_range(atoi(argv[1]), atoi(argv[2]));
	while (tab[i])
		printf("%d ", tab[i++]);		
	return (0);
}
*/

int *ft_range(int min, int max)
{
	int i;
	int *arr;

	i = 0;
	if (min >= max)
		return (0);
	if (!(arr = (int *)malloc(sizeof(int) * max - min)))
		return NULL;
	while (min < max)
		arr[i++] = min++;
	return (arr);
}
