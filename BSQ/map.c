/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/25 13:28:34 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/25 14:08:53 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

typedef struct grid
{
	int x;
	int y;
} grid_en;

void	print_the_map(int x, int y);

int main(int argc, char *argv[])
{
	(void)argc;
	int	x;
	int	y;

	x = atoi(argv[1]);
	y = atoi(argv[2]);
	print_the_map(x, y);

	return 0;
}

void	print_the_map(int x, int y)
{
	int	i;
	int	j;

	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (rand() % (x / y) + 1 < x)
				write(1, "o", 1);
			else
				write(1, ".", 1);
			j++;
		}
		i++;
		write(1, "\n", 1);
	}
}
