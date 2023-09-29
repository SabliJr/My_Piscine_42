/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/15 11:10:59 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/16 23:44:14 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_pass_char(int argc, char *argv[]);

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

int	ft_strcmp(char *str, char *str2)
{
	int	i;

	i = 0;
	while ((str[i] == str2[i]) && (str[i] != '\0' && str2[i] != '\0'))
		i++;
	return (str[i] - str2[i]);
}

int	main(int argc, char *argv[])
{
	int		i;
	int		loop_till_end;
	char	*temp;

	loop_till_end = 1;
	while (loop_till_end)
	{
		loop_till_end = 0;
		i = 1;
		while (i < argc - 1)
		{
			if (ft_strcmp(argv[i], argv[i + 1]) > 0)
			{
				temp = argv[i];
				argv[i] = argv[i + 1];
				argv[i + 1] = temp;
				loop_till_end = 1;
			}
			i++;
		}
	}
	ft_pass_char(argc, argv);
	return (0);
}

void	ft_pass_char(int argc, char *argv[])
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		ft_putstr(argv[i + 1]);
		i++;
	}
}
