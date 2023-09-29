/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 08:57:04 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/19 20:07:35 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	l;

	l = 0;
	while (str[l])
		l++;
	return (l);
}

int	ft_get_nbr(char c, char *str)
{
	int	x;

	x = 0;
	while (str[x])
	{
		if (str[x] == c)
			return (x);
		x++;
	}
	return (-1);
}

int	ft_is_valid_base(char *base, int base_len)
{
	int	j;
	int	i;

	i = 0;
	if (base_len < 2)
		return (0);
	while (base[i] != '\0')
	{
		if ((base[i] >= 9 && base[i] <= 13) || (base[i] == 32))
			return (0);
		if (base[i] == '-' || base[i] == '+')
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	res;
	int	i;
	int	sign;
	int	base_len;

	res = 0;
	i = 0;
	sign = 1;
	base_len = ft_strlen(base);
	if (!ft_is_valid_base(base, base_len))
		return (0);
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && ft_get_nbr(str[i], base) >= 0)
	{
		res = res * base_len + ft_get_nbr(str[i], base);
		i++;
	}
	return (sign * res);
}

/*
int	main(int argc, char **argv)
{
	(void) argc;
	printf("42:%d\n", ft_atoi_base("2a", "0123456789abcdef"));
	printf("-42:%d\n", ft_atoi_base("   --------+-2a", "0123456789abcdef"));
	printf("42:%d\n", ft_atoi_base("   -+-2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+- 2a", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-z", "0123456789abcdef"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", ""));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "+-0"));
	printf("0:%d\n", ft_atoi_base("   --------+-2a", "\t01"));
	printf("valeue : %d\n", ft_atoi_base(argv[1], argv[2]));
}
*/
