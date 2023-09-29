/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:39:12 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/08 14:13:05 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putarr(char v[], int size, int first_indx_of_max_val_arr);
void	ft_putchar(char c);

void	ft_print_combn(int n)
{
	int		i;
	int		base;
	char	val[10];
	char	val_max[10];

	i = 0;
	if (n < 1 || n > 9)
		return ;
	while (i < n)
	{
		val[i] = i + '0';
		val_max[i] = (10 - n) + i + '0';
		i++;
	}
	ft_putarr(val, n, val_max[0]);
	while (val[0] != val_max[0])
	{
		i = n - 1;
		while (val[i] == val_max[i])
			i--;
		base = ++val[i];
		while (i < n - 1)
			val[++i] = ++base;
		ft_putarr(val, n, val_max[0]);
	}
}

/*int	main()
{
	ft_print_combn(2);
	return (0);
}*/

void	ft_putarr(char v[], int size, int first_indx_of_max_val_arr)
{
	int	i;

	i = 0;
	if (v[0] == first_indx_of_max_val_arr)
	{
		while (i < size)
			ft_putchar(v[i++]);
		return ;
	}
	while (i < size)
		ft_putchar(v[i++]);
	write(1, ", ", 2);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
