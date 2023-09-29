/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 22:12:37 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/10 15:44:31 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	i;

	i = 0;
	temp = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = temp;
		i++;
	}
}

/*
int main()
{
	int arr[] = {9, 3, 7, 18, -2, 4, 0};
	int len = sizeof(arr) / sizeof(int);
	ft_rev_int_tab(arr, len);
	
	int i = 0;
	while (i < len)
	{
		printf("%d ", arr[i]);
		i++;
	}
	return (0);
}
*/
