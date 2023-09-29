/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 18:08:22 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/08 14:00:22 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);
void	ft_print_comb2(void);
void	ft_putnum(int a, int b);

/*int	main()
{
	ft_print_comb2();
	return (0);
}*/

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putnum(a, b);
			b++;
		}
		a++;
	}
}

void	ft_putnum(int a, int b)
{
	ft_putchar(a / 10 + 48);
	ft_putchar(a % 10 + 48);
	ft_putchar(' ');
	ft_putchar(b / 10 + 48);
	ft_putchar(b % 10 + 48);
	if (a != 98)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
