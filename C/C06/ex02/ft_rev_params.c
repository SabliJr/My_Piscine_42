/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_prams.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 10:54:22 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/16 23:40:53 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char *str)
{
	int	y;

	y = 0;
	while (str[y] != '\0')
	{
		write(1, &str[y], 1);
		y++;
	}
	write(1, "\n", 1);
}

int	main(int argc, char *argv[])
{
	int	i;

	i = 1;
	while (argc > i)
	{
		ft_putchar(argv[argc - 1]);
		argc--;
	}
	return (0);
}
