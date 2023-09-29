/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 17:01:18 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/08 13:58:04 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pass_n(char a, char b, char c);
void	ft_putchar(char c);
void	ft_print_comb(void);

/*
int main() 
{
	ft_print_comb();
	return (0);
}
*/

void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				ft_pass_n(a, b, c);
				c++;
			}
			b++;
		}
		a++;
	}
}

void	ft_pass_n(char a, char b, char c)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(c);
	if (a != '7' || b != '8' || c != '9')
	{	
		write(1, ", ", 2);
	}
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
