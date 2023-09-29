/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   first_word.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabakar- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/26 15:17:48 by sabakar-          #+#    #+#             */
/*   Updated: 2023/09/26 16:16:29 by sabakar-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_first_word(char *str);

int	main(int argc, char *argv[])
{
	(void)argc;
	ft_first_word(argv[1]);
	write(1, "\n", 1);
	return (0);
}

void ft_first_word(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}	
