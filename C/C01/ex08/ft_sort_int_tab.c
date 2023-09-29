/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 23:27:32 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/10 15:54:37 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *x, int *y);

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	i = 0;
	while (i < size)
	{
		j = i + 1;
		while (j < size)
		{
			if (tab[i] > tab[j])
				ft_swap(&tab[i], &tab[j]);
			j++;
		}
		i++;
	}
}

void	ft_swap(int *x, int *y)
{
	int	curr;

	curr = *x;
	*x = *y;
	*y = curr;
}

/*
int main()
{
	 int a[] = {3, 6, 8, 2, 0, -4, 5};
	int len = sizeof(a) / sizeof(int);

	ft_sort_int_tab(a, len);
	
	int x = 0;
	while (x < len)
{
		printf("%d ", a[x]);
		x++;
}
	return 0;
}
*/
