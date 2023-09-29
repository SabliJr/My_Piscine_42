/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 20:47:33 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/09 12:16:46 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	unsigned int	n;

	if (nb < 0)
	{
		ft_putchar('-');
		n = -1 * nb;
	}
	else
		n = nb;
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
		ft_putchar(n + '0');
}

/*int	main(void)
{
 ft_putnbr();
	write(1, "\n", 1);
 ft_putnbr(0);
	write(1, "\n", 1);
 ft_putnbr(-42);
	write(1, "\n", 1);
ft_putnbr(2147483647);
	write(1, "\n", 1);
ft_putnbr(10);
	write(1, "\n", 1);
	return (0);
}*/
