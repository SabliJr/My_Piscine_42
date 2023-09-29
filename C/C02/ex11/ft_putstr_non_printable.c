/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 11:15:34 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/12 18:57:50 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	is_printable(char c)
{
	return (c >= 32 && c <= 126);
}

void	ft_dec_hex(unsigned char c)
{
	char	*hex;

	hex = "0123456789abcdef";
	ft_putchar(hex[c / 16]);
	ft_putchar(hex[c % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (is_printable(str[i]))
		{
			ft_putchar(str[i]);
		}
		else
		{
			write(1, "\\", 1);
			ft_dec_hex(str[i]);
		}
		i++;
	}
}

/*
int main()
{
	char a[] = "Coucou\ttu vas bi\ren ?";
	ft_putstr_non_printable(a);

	return 0;
}
*/
