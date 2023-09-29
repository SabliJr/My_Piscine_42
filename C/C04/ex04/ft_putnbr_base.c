/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 09:05:58 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/20 22:15:16 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_check_base(char *base)
{
	int	i;
	int	j;

	if (ft_strlen(base) < 2)
		return (0);
	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '-' || base[i] == '+')
			return (0);
		if (!(base[i] >= 33 && base[i] <= 126))
			return (0);
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nb;

	if (!ft_check_base(base))
		return ;
	if (nbr < 0)
	{
		ft_putchar('-');
		nb = -1 * nbr;
	}
	else
		nb = nbr;
	if (nb > 9)
		ft_putnbr_base(nb / ft_strlen(base), base);
	ft_putchar(base[nb % ft_strlen(base)]);
}

/*
int    main(void)
{
	ft_putnbr_base(10, "0123456789");
		return 0;
}
*/
